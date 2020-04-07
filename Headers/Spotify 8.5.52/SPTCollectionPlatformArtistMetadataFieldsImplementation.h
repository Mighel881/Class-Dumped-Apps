//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTCollectionPlatformDataLoaderFieldsImplementation.h"

#import "SPTCollectionPlatformArtistMetadataFields-Protocol.h"

@class NSDate, NSDictionary, NSString, NSURL;

@interface SPTCollectionPlatformArtistMetadataFieldsImplementation : SPTCollectionPlatformDataLoaderFieldsImplementation <SPTCollectionPlatformArtistMetadataFields>
{
    _Bool _isFollowed;
    _Bool _isBanned;
    NSDate *_addTime;
    NSDictionary *_artistPortraits;
    unsigned long long _artistTracksCount;
    NSURL *_collectionURL;
    NSString *_groupLabel;
}

@property(copy, nonatomic) NSString *groupLabel; // @synthesize groupLabel=_groupLabel;
@property(retain, nonatomic) NSURL *collectionURL; // @synthesize collectionURL=_collectionURL;
@property(nonatomic) unsigned long long artistTracksCount; // @synthesize artistTracksCount=_artistTracksCount;
@property(nonatomic) _Bool isBanned; // @synthesize isBanned=_isBanned;
@property(nonatomic) _Bool isFollowed; // @synthesize isFollowed=_isFollowed;
@property(copy, nonatomic) NSDictionary *artistPortraits; // @synthesize artistPortraits=_artistPortraits;
@property(retain, nonatomic) NSDate *addTime; // @synthesize addTime=_addTime;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, nonatomic) NSURL *URL;
@property(readonly, nonatomic) unsigned long long availableOfflineStatus;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly) Class superclass;

@end
