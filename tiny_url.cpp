class Solution{
	private:
		unordered_map<int,int> mp;
		string base_url="https://tinyurl.com/";
	public:
		string encode(string longUrl) {
			string code="";
			for(int i=0;i<6;i++){
				char ch='a'+rand() %26;
				code+=ch;
			}
			return base_url+code;
		}
		string decode(string shortUrl){
			string code=shortUrl.substr(base_url.size());
			return mp[code];
		}

};

