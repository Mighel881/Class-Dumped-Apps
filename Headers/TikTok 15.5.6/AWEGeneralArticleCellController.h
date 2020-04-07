//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEModernFeedCellControllerProtocol-Protocol.h"

@class AWESearchArticleSingerCellViewController, NSString;
@protocol AWEModernFeedCellContext;

@interface AWEGeneralArticleCellController : UIViewController <AWEModernFeedCellControllerProtocol>
{
    NSString *_enterFrom;
    AWESearchArticleSingerCellViewController *_articleSingleViewController;
    id <AWEModernFeedCellContext> _context;
}

+ (double)cellHeightWithModel:(id)arg1 width:(double)arg2;
+ (double)modernFeedCellPreferedHeightForModel:(id)arg1 width:(double)arg2;
+ (void)__awe__codeRunnerRun_28;
@property(retain, nonatomic) id <AWEModernFeedCellContext> context; // @synthesize context=_context;
@property(retain, nonatomic) AWESearchArticleSingerCellViewController *articleSingleViewController; // @synthesize articleSingleViewController=_articleSingleViewController;
@property(copy, nonatomic) NSString *enterFrom; // @synthesize enterFrom=_enterFrom;
- (void).cxx_destruct;
- (void)updateWithReferString:(id)arg1;
- (void)updateWithModel:(id)arg1;
- (id)initWithContext:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
