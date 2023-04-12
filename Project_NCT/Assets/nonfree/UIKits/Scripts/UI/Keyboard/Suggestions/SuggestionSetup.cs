using System.Collections;
using System.Collections.Generic;


namespace VRUiKits.Utils
{
    public class SuggestionSetup
    {
        public static SuggestionSetup instance;
        Node root = new Node();
        string[] textArray;

        public SuggestionSetup(string[] textArray)
        {
            this.textArray = textArray;
            PreProcess();
            instance = this;
        }

        void PreProcess()
        {
            for (int i = 0; i < textArray.Length; i++)
            {
                Node next = root;
                string word = textArray[i];

                foreach (char character in word)
                {
                    if (!next.nodes.ContainsKey(character))
                    {
                        next.nodes[character] = new Node();
                    }

                    next.indexes.Add(i);
                    next = next.nodes[character];
                }
            }
        }

        public List<string> GetSuggestions(string word, int maxNumberOfSuggestions)
        {
            List<string> result = new List<string>();
            List<int> indexes = new List<int>();

            if (word.Length == 0)
            {
                return result;
            }
            else
            {
                Node next = root;
                foreach (char character in word)
                {
                    if (next.nodes.ContainsKey(character))
                    {
                        next = next.nodes[character];
                    }
                }
                indexes = next.indexes;
            }

            foreach (int index in indexes)
            {
                if (result.Count >= maxNumberOfSuggestions)
                {
                    break;
                }

                string text = textArray[index];
                if (text == word)
                {
                    continue;
                }
                result.Add(text);
            }

            return result;
        }
    }

    public class Node
    {
        public Dictionary<char, Node> nodes = new Dictionary<char, Node>() { };
        public List<int> indexes = new List<int>();
    }
}