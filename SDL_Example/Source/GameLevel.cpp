//#include "GameLevel.h"
//#include <string>
//
//GameLevel::GameLevel()
//{
//	bool res = LoadLevel("Assets\\TestLevel\\ZZGR.tmx");
//}
//bool GameLevel::LoadLevel(char* levelPath)
//{
//	FILE* pFile = fopen(levelPath,"rb");
//	if(!pFile)
//	{
//		//Couldn't locate level!
//		return false;
//	}
//
//	U32 fileSize = GFileSize(pFile);
//	char* buffer = (char*)malloc(fileSize+1);
//	GReadBuffer(buffer,fileSize,pFile);
//	buffer[fileSize] = 0;
//
//	rapidxml::xml_document<>doc;
//	doc.parse<0>(buffer);	
//	RecurseNode(doc.first_node());
//
//
//	//Cleanup
//	doc.clear();
//	free(buffer);
//	return true;
//}
//void GameLevel::RecurseNode(rapidxml::xml_node<> *node)
//{
//	if(!node)
//		return;
//	RecurseNode(node->first_node());
//
//	//Now handle some attributes!
//	for(rapidxml::xml_attribute<>* atr = node->first_attribute(); atr; atr = atr->next_attribute())
//	{
//		HandleAttribute(atr);
//	}
//}
//void GameLevel::HandleAttribute(rapidxml::xml_attribute<>* attrib)
//{
//	std::string parentName = attrib->parent()->name();
//
//	std::string attributeName = attrib->name();
//	std::string attributeValue = attrib->value();
//	
//}