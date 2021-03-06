//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGOverviewViewModel.h"

#import "SGDDetailDataModelDelegate-Protocol.h"

@class NSArray, NSString, SGDetailDataModel, XBXAlbum;

@interface SGAlbumViewModel : SGOverviewViewModel <SGDDetailDataModelDelegate>
{
    NSArray *_tracks;
    NSString *_imageUrl;
    SGDetailDataModel *_detailDataModel;
}

@property(retain, nonatomic) SGDetailDataModel *detailDataModel; // @synthesize detailDataModel=_detailDataModel;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) NSArray *tracks; // @synthesize tracks=_tracks;
- (void).cxx_destruct;
- (void)addToPlaylist;
- (id)getContextForIndex:(unsigned long long)arg1;
- (void)setupResults:(id)arg1;
- (void)onTrackListFailed:(id)arg1;
- (void)onTrackListSucceeded:(id)arg1;
- (void)onDetailDataAvailable:(id)arg1;
- (void)refresh;
- (void)onDestroy;
- (void)onDeactivate;
- (void)onActivate;
- (void)onInitialize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) XBXAlbum *mediaItem; // @dynamic mediaItem;
@property(readonly) Class superclass;

@end

