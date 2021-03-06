//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DBCollectionViewController, DBFileListThumbnailProvider, DBUserState;

@interface DBRecentsGroupedEntryThumbnailHelper : NSObject
{
    DBCollectionViewController *_associatedVC;
    DBFileListThumbnailProvider *_thumbnailProvider;
    DBUserState *_userState;
}

@property(nonatomic) __weak DBUserState *userState; // @synthesize userState=_userState;
@property(readonly, nonatomic) DBFileListThumbnailProvider *thumbnailProvider; // @synthesize thumbnailProvider=_thumbnailProvider;
@property(nonatomic) __weak DBCollectionViewController *associatedVC; // @synthesize associatedVC=_associatedVC;
- (void).cxx_destruct;
- (void)pingRecentsPrefetcher;
- (id)db_indexPathsForVisibleItems;
- (id)db_fileEntryAtThumbnailIndexPath:(id)arg1;
- (void)db_createThumbnailProvider;
- (id)initWithUserState:(id)arg1;

@end

