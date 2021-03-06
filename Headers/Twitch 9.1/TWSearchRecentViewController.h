//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitchCoreUI/TWBaseTableViewController.h>

#import "TWPagedContentViewController-Protocol.h"
#import "TWRecentSearchesHeaderViewInteractionDelegate-Protocol.h"

@class NSArray, NSString;
@protocol TWSearchRecentViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface TWSearchRecentViewController : TWBaseTableViewController <TWRecentSearchesHeaderViewInteractionDelegate, TWPagedContentViewController>
{
    id <TWSearchRecentViewControllerDelegate> _delegate;
    NSArray *_recentSearches;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *recentSearches; // @synthesize recentSearches=_recentSearches;
@property(nonatomic) __weak id <TWSearchRecentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)clearResults;
- (void)populateResults;
@property(readonly, copy, nonatomic) NSString *subscreenName;
@property(readonly, copy, nonatomic) NSString *screenName;
- (void)recentSearchesHeaderViewDidRequestClear:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
- (id)initWithThemeManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

