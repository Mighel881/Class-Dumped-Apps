//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol DBToolbarContextProtocol, UITraitEnvironment;

@protocol DBToolbarContextProtocol <NSObject>
+ (id)typedContextOrNil:(id <DBToolbarContextProtocol>)arg1;
@property(nonatomic, readonly) id <UITraitEnvironment> traitEnvironment;
@property(nonatomic, readonly) unsigned long long displayStyle;
@end
