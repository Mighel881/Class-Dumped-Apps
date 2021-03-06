//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DBLegacyServerPhotoItem, DBLightboxCollection, NSString;
@protocol DBFileEntry;

@interface DBLightboxCollectionItem : NSObject
{
    DBLightboxCollection *_collection;
    _Bool _hasZoomed;
    DBLegacyServerPhotoItem *_photoItem;
    _Bool _loadFailed;
    _Bool _assetLoadFailed;
    unsigned long long _loadFailedReason;
    id <DBFileEntry> _fileEntry;
    NSString *_userId;
}

@property(readonly, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(nonatomic) _Bool assetLoadFailed; // @synthesize assetLoadFailed=_assetLoadFailed;
@property(nonatomic) _Bool loadFailed; // @synthesize loadFailed=_loadFailed;
@property(readonly, nonatomic) id <DBFileEntry> fileEntry; // @synthesize fileEntry=_fileEntry;
@property(nonatomic) unsigned long long loadFailedReason; // @synthesize loadFailedReason=_loadFailedReason;
- (void).cxx_destruct;
- (_Bool)isImageCached;
- (_Bool)isZoomable;
- (_Bool)isLoading;
- (_Bool)isGif;
- (unsigned long long)pageType;
- (_Bool)setZoomed:(_Bool)arg1;
@property(readonly, nonatomic) _Bool hasZoomed;
- (_Bool)shouldLoadRetina;
- (_Bool)shouldLoadLocalAsset;
- (long long)bestReprToFetch;
- (long long)reprHitInCache;
- (_Bool)hasReprOnDisk:(long long)arg1;
- (long long)bestThumbReprOnDiskExcludingOriginal;
- (id)initWithFileEntry:(id)arg1 collection:(id)arg2;
- (id)initWithPhotoItem:(id)arg1 userState:(id)arg2 collection:(id)arg3;
- (id)initWithDirectoryEntry:(id)arg1 userState:(id)arg2 collection:(id)arg3;
- (id)initWithFilePath:(id)arg1 userState:(id)arg2 collection:(id)arg3;
- (id)init;

@end

