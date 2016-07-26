/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:33 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBDeckSwitcherViewController.h>

@class NSMutableDictionary, UIImageView;

@interface SBReduceMotionDeckSwitcherViewController : SBDeckSwitcherViewController {

	NSMutableDictionary* _visibleIconTitleContainers;
	UIImageView* _outerShadowView;

}
-(void)_updateScrollViewFrameAndContentSize;
-(void)_animatePresentationWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_animateDismissalWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)_shouldScrollForDismissalToItem:(id)arg1 ;
-(id)_animationFactoryForWallpaper;
-(id)_animationSettingsForHidingSideAppForPresentation;
-(id)_animationSettingsForRevealingSideAppForDismissal;
-(BOOL)_shouldFadeInToRevealSideAppForDismissal;
-(CGRect)_frameForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 transitionParameters:(UIEdgeInsets)arg3 scrollProgress:(double)arg4 ignoringScrollOffset:(BOOL)arg5 ignoringKillingAdjustments:(BOOL)arg6 ignoringPinning:(BOOL)arg7 ;
-(BOOL)_shouldUseDepth;
-(double)_leadingOffsetForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 transitionParameters:(UIEdgeInsets)arg3 scrollProgress:(double)arg4 ignoringKillingAdjustments:(BOOL)arg5 ;
-(CGSize)_scrollViewContentSizeForDisplayItemCount:(unsigned long long)arg1 ;
-(void)_didAddVisibleItemContainer:(id)arg1 forDisplayItem:(id)arg2 ;
-(void)_didRemoveVisibleItemContainerForDisplayItem:(id)arg1 ;
-(double)_opacityForIndex:(unsigned long long)arg1 scrollProgress:(double)arg2 ;
-(double)_scrollProgressForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 progressPresented:(double)arg3 frameOrigin:(double)arg4 ignoringScrollOffset:(BOOL)arg5 ;
-(double)_preferredVisibleMarginForTopPage;
-(void)_applyStyleToItemContainer:(id)arg1 forceRealBlur:(BOOL)arg2 ;
-(BOOL)_shouldShowIconAndTitleInItemContainers;
-(BOOL)_shouldAdjustScrollViewTracking;
-(void)_updateOuterShadowView;
-(void)_updateIconTitleViews;
-(double)_scrollProgressForEffectiveIndex:(double)arg1 displayItemsCount:(unsigned long long)arg2 progressPresented:(double)arg3 frameOrigin:(double)arg4 ;
-(id)_iconTitleContainerForDisplayItem:(id)arg1 ;
-(void)_updateScrollViewPagingWidth;
-(id)_reduceMotionAnimationFactory;
-(CGRect)_frameForAllItemsInScrollView;
-(double)_opacityForIconTitleViewAtIndex:(unsigned long long)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
@end
