/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:32 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView;

@interface SBHighlightView : UIView {

	UIImageView* _highlight;
	double _highlightAlpha;
	double _highlightHeight;

}

@property (nonatomic,readonly) double highlightAlpha;               //@synthesize highlightAlpha=_highlightAlpha - In the implementation block
@property (nonatomic,readonly) double highlightHeight;              //@synthesize highlightHeight=_highlightHeight - In the implementation block
+(id)_highlightImageWithHeight:(double)arg1 alpha:(double)arg2 ;
-(id)initWithFrame:(CGRect)arg1 highlightAlpha:(double)arg2 highlightHeight:(double)arg3 ;
-(double)highlightHeight;
-(void)layoutSubviews;
-(double)highlightAlpha;
@end

