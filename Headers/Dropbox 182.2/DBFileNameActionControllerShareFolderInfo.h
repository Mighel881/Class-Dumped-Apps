//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface DBFileNameActionControllerShareFolderInfo : NSObject
{
    _Bool _shouldShare;
    NSArray *_members;
    NSString *_message;
}

@property(readonly, nonatomic) _Bool shouldShare; // @synthesize shouldShare=_shouldShare;
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic) NSArray *members; // @synthesize members=_members;
- (void).cxx_destruct;
- (id)initForSharedFolderWithMembers:(id)arg1 message:(id)arg2;
- (id)initForFolder;

@end
