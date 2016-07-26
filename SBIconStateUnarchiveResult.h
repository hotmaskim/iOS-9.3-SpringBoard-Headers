/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:30 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBIconStateUnarchiveContext.h>

@protocol SBIconIndexNode;
@class SBIconModel, NSMutableArray, NSMutableSet, NSString;

@interface SBIconStateUnarchiveResult : NSObject <SBIconStateUnarchiveContext> {

	SBIconModel* _iconSource;
	id<SBIconIndexNode> _node;
	NSMutableArray* _folderStack;
	long long _parseDepth;
	NSMutableSet* _nodeIdentifiersUnarchived;
	BOOL _corrupted;
	BOOL _dirty;

}

@property (nonatomic,retain) id<SBIconIndexNode> node;                                      //@synthesize node=_node - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (getter=isDirty,nonatomic,readonly) BOOL dirty; 
@property (setter=_setIconSource:,nonatomic,retain) SBIconModel * _iconSource;              //@synthesize iconSource=_iconSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_noteEnteredNode;
-(void)_noteExitedNode;
-(SBIconModel *)_iconSource;
-(void)_pushFolder:(id)arg1 ;
-(id)_currentFolder;
-(id)_popFolder;
-(long long)_currentParseDepth;
-(void)_noteRepresentationIsCorrupted;
-(void)_noteSignificantDeviation;
-(BOOL)_isNodeIdentifierAlreadyUnarchived:(id)arg1 ;
-(void)_noteNodeIdentifierWasUnarchived:(id)arg1 ;
-(void)_setIconSource:(id)arg1 ;
-(void)_setNode:(id)arg1 ;
-(BOOL)isValid;
-(id<SBIconIndexNode>)node;
-(BOOL)isDirty;
@end
