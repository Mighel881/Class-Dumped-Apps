//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class DBSHARINGShareFolderError, DBSHARINGSharedFolderMetadataBase, DBSharedContentMetadata;

@protocol DBSharedContentAPIClientResponseWrapperForJobStatus
@property(readonly, nonatomic) DBSHARINGShareFolderError *failed;
@property(readonly, nonatomic) DBSHARINGSharedFolderMetadataBase *complete;
- (DBSharedContentMetadata *)createSharedContentMetadataFromCompleteMetadata;
- (_Bool)isFailed;
- (_Bool)isComplete;
- (_Bool)isInProgress;
@end
