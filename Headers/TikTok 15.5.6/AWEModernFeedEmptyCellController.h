//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEModernFeedCellControllerProtocol-Protocol.h"

@class AWEModernFeedEmptyView, NSString;
@protocol AWEModernFeedCellContext;

@interface AWEModernFeedEmptyCellController : UIViewController <AWEModernFeedCellControllerProtocol>
{
    id <AWEModernFeedCellContext> _context;
    AWEModernFeedEmptyView *_emptyView;
}

+ (double)modernFeedCellPreferedHeightForModel:(id)arg1 width:(double)arg2;
+ (void)__awe__codeRunnerRun_46;
@property(retain, nonatomic) AWEModernFeedEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) id <AWEModernFeedCellContext> context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
