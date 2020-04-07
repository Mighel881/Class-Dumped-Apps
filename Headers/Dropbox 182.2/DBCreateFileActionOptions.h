//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DBFileActionOptionsWithDestination.h"

#import "DBFileActionOptionsWithRenameProtocol-Protocol.h"

@class NSString;

@interface DBCreateFileActionOptions : DBFileActionOptionsWithDestination <DBFileActionOptionsWithRenameProtocol>
{
    _Bool _didChangeName;
    NSString *_fileBaseName;
    NSString *_fileExtension;
}

@property(nonatomic) _Bool didChangeName; // @synthesize didChangeName=_didChangeName;
@property(readonly, copy, nonatomic) NSString *fileExtension; // @synthesize fileExtension=_fileExtension;
@property(copy, nonatomic) NSString *fileBaseName; // @synthesize fileBaseName=_fileBaseName;
- (void).cxx_destruct;
- (long long)fileActionOptionsType;
@property(readonly, nonatomic) unsigned long long itemType;
@property(readonly, copy, nonatomic) NSString *fileName;
- (_Bool)db_commonInitWithDefaultFileName:(id)arg1 fileExtension:(id)arg2;
- (id)initWithForcedDestination:(id)arg1 defaultFileName:(id)arg2 fileExtension:(id)arg3 modalPresenter:(id)arg4;
- (id)initWithUserState:(id)arg1 forcedDestination:(id)arg2 defaultFileName:(id)arg3 fileExtension:(id)arg4 modalPresenter:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
