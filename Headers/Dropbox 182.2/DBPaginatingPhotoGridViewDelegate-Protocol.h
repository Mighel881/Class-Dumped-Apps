//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UIScrollViewDelegate-Protocol.h"

@class DBPaginatingPhotoGridView, DropboxDirectoryEntry;

@protocol DBPaginatingPhotoGridViewDelegate <UIScrollViewDelegate>

@optional
- (struct CGPoint)photoGridViewContentOffsetMargin:(DBPaginatingPhotoGridView *)arg1;
- (void)photoGridView:(DBPaginatingPhotoGridView *)arg1 didDeselectDirEntry:(DropboxDirectoryEntry *)arg2;
- (void)photoGridView:(DBPaginatingPhotoGridView *)arg1 didSelectDirEntry:(DropboxDirectoryEntry *)arg2;
- (void)photoGridView:(DBPaginatingPhotoGridView *)arg1 wantsDetailedViewOfDirectoryEntry:(DropboxDirectoryEntry *)arg2;
- (void)photoGridView:(DBPaginatingPhotoGridView *)arg1 didChangeToCurrentPage:(long long)arg2 fromPage:(long long)arg3;
@end
