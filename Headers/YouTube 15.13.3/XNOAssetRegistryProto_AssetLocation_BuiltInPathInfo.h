//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString;

@interface XNOAssetRegistryProto_AssetLocation_BuiltInPathInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *androidFullPath; // @dynamic androidFullPath;
@property(readonly, nonatomic) int androidPathOneOfCase; // @dynamic androidPathOneOfCase;
@property(copy, nonatomic) NSString *androidRelativeAssetsPath; // @dynamic androidRelativeAssetsPath;
@property(copy, nonatomic) NSString *androidRelativeExternalStoragePath; // @dynamic androidRelativeExternalStoragePath;
@property(copy, nonatomic) NSString *androidRelativeInternalStoragePath; // @dynamic androidRelativeInternalStoragePath;
@property(copy, nonatomic) NSString *defaultRelativePath; // @dynamic defaultRelativePath;
@property(copy, nonatomic) NSString *desktopFullPath; // @dynamic desktopFullPath;
@property(nonatomic) _Bool hasDefaultRelativePath; // @dynamic hasDefaultRelativePath;
@property(nonatomic) _Bool hasDesktopFullPath; // @dynamic hasDesktopFullPath;
@property(readonly, nonatomic) int iosPathOneOfCase; // @dynamic iosPathOneOfCase;
@property(copy, nonatomic) NSString *iosRelativeBundlePath; // @dynamic iosRelativeBundlePath;
@property(copy, nonatomic) NSString *iosRelativeDataPath; // @dynamic iosRelativeDataPath;

@end
