//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DBUserFileSharedFolderManagerValidationInfo : NSObject
{
    _Bool _unknown;
    _Bool _loading;
    _Bool _canViewSharedFolderSettings;
    _Bool _canShareLink;
}

@property(readonly, nonatomic) _Bool canShareLink; // @synthesize canShareLink=_canShareLink;
@property(readonly, nonatomic) _Bool canViewSharedFolderSettings; // @synthesize canViewSharedFolderSettings=_canViewSharedFolderSettings;
@property(readonly, nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(readonly, nonatomic) _Bool unknown; // @synthesize unknown=_unknown;
- (id)initWithUnknown:(_Bool)arg1 loading:(_Bool)arg2 canViewSharedFolderSettings:(_Bool)arg3 canShareLink:(_Bool)arg4;

@end
