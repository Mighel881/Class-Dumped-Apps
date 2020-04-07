//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DBCollectionViewController.h"

@class NSLayoutConstraint, UIView;

@interface DBHeroHeaderAwareCollectionViewController : DBCollectionViewController
{
    _Bool _hasConnectedToHeroHeader;
    _Bool _hasHeroHeader;
    UIView *_heroContentViewGuide;
    NSLayoutConstraint *_heroBottomLayoutGuideConstraint;
    NSLayoutConstraint *_nonHeroBottomLayoutGuideConstraint;
}

- (void).cxx_destruct;
- (id)contentTopLayoutAnchor;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)db_connectTopAnchorToHero;
- (void)db_checkForHeroHeaderContainer;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

@end
