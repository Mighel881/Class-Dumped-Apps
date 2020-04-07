//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelegramUI/TGViewController.h>

#import <TelegramUI/UITableViewDataSource-Protocol.h>
#import <TelegramUI/UITableViewDelegate-Protocol.h>

@class NSArray, NSString, SMetaDisposable, TGMediaAssetsLibrary, TGMediaAssetsPallete, TGSuggestionContext, UITableView;

@interface TGMediaGroupsController : TGViewController <UITableViewDataSource, UITableViewDelegate>
{
    int _intent;
    TGMediaAssetsLibrary *_assetsLibrary;
    NSArray *_groups;
    SMetaDisposable *_groupsDisposable;
    UITableView *_tableView;
    _Bool _localMediaCacheEnabled;
    _Bool _liveVideoUploadEnabled;
    _Bool _captionsEnabled;
    TGSuggestionContext *_suggestionContext;
    TGMediaAssetsPallete *_pallete;
    CDUnknownBlockType _openAssetGroup;
}

@property(copy, nonatomic) CDUnknownBlockType openAssetGroup; // @synthesize openAssetGroup=_openAssetGroup;
@property(retain, nonatomic) TGMediaAssetsPallete *pallete; // @synthesize pallete=_pallete;
@property(nonatomic) _Bool captionsEnabled; // @synthesize captionsEnabled=_captionsEnabled;
@property(nonatomic) _Bool liveVideoUploadEnabled; // @synthesize liveVideoUploadEnabled=_liveVideoUploadEnabled;
@property(nonatomic) _Bool localMediaCacheEnabled; // @synthesize localMediaCacheEnabled=_localMediaCacheEnabled;
@property(retain, nonatomic) TGSuggestionContext *suggestionContext; // @synthesize suggestionContext=_suggestionContext;
- (void).cxx_destruct;
- (_Bool)prefersStatusBarHidden;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadViewIfNeeded;
- (void)loadView;
- (void)dealloc;
- (id)initWithContext:(id)arg1 assetsLibrary:(id)arg2 intent:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
