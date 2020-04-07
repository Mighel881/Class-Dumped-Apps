//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DBDbxPlatformPhotoTranscodeDependentMetadata, NSNumber;
@protocol DBDbxPhotoStream;

@interface DBDbxPhotoDataResult : NSObject
{
    _Bool _didUseNetwork;
    id <DBDbxPhotoStream> _stream;
    NSNumber *_error;
    DBDbxPlatformPhotoTranscodeDependentMetadata *_transcodeDependentMetadata;
}

+ (id)dbxPhotoDataResultWithStream:(id)arg1 error:(id)arg2 didUseNetwork:(_Bool)arg3 transcodeDependentMetadata:(id)arg4;
@property(readonly, nonatomic) DBDbxPlatformPhotoTranscodeDependentMetadata *transcodeDependentMetadata; // @synthesize transcodeDependentMetadata=_transcodeDependentMetadata;
@property(readonly, nonatomic) _Bool didUseNetwork; // @synthesize didUseNetwork=_didUseNetwork;
@property(readonly, nonatomic) NSNumber *error; // @synthesize error=_error;
@property(readonly, nonatomic) id <DBDbxPhotoStream> stream; // @synthesize stream=_stream;
- (void).cxx_destruct;
- (id)description;
- (id)initWithStream:(id)arg1 error:(id)arg2 didUseNetwork:(_Bool)arg3 transcodeDependentMetadata:(id)arg4;

@end
