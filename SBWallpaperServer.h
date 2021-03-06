/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:32 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FBSystemServiceFacility.h>

@protocol SBWallpaperServerDelegate;
@interface SBWallpaperServer : FBSystemServiceFacility {

	id<SBWallpaperServerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBWallpaperServerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
-(void)_handleFetchThumbnailMessage:(id)arg1 fromClient:(id)arg2 ;
-(long long)_wallpaperVariantFromXPCDictionary:(id)arg1 ;
-(void)setDelegate:(id<SBWallpaperServerDelegate>)arg1 ;
-(id)init;
-(id<SBWallpaperServerDelegate>)delegate;
-(void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3 ;
@end

