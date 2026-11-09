// gml_Object_oRogueLevelManager_CleanUp_0 @ 0x140d34210

void gml_Object_oRogueLevelManager_CleanUp_0(ulonglong param_1,ulonglong param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  char cVar8;
  undefined1 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  longlong *plVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  uint uVar23;
  undefined4 uVar24;
  ulonglong local_res8;
  ulonglong local_res10;
  undefined8 local_res18;
  uint local_res20;
  undefined4 uVar27;
  ulonglong *puVar25;
  undefined8 *puVar26;
  undefined4 uVar29;
  undefined8 **ppuVar28;
  undefined8 in_stack_fffffffffffff488;
  undefined8 in_stack_fffffffffffff490;
  undefined8 in_stack_fffffffffffff498;
  undefined4 uVar30;
  undefined8 in_stack_fffffffffffff4a0;
  undefined8 local_ac8;
  undefined4 local_ac0;
  undefined4 local_abc;
  undefined8 local_ab8;
  char *local_ab0;
  undefined4 local_aa8;
  undefined8 local_aa0;
  undefined4 local_a94;
  undefined8 local_a90;
  undefined4 local_a88;
  undefined4 local_a84;
  undefined8 local_a80;
  undefined4 local_a78;
  undefined4 local_a74;
  undefined8 local_a70;
  undefined4 local_a68;
  undefined4 local_a64;
  undefined1 local_a60 [24];
  undefined8 *local_a48;
  undefined8 *local_a40;
  undefined8 *local_a38;
  undefined1 *local_a30;
  undefined1 *local_a28;
  undefined1 *local_a20;
  undefined8 *local_a18;
  undefined1 *local_a10;
  undefined8 local_a08 [2];
  undefined1 local_9f8 [16];
  undefined8 local_9e8;
  undefined4 local_9dc;
  undefined8 local_9d8 [2];
  undefined8 local_9c8 [2];
  undefined8 local_9b8;
  undefined4 local_9ac;
  undefined8 local_9a8;
  undefined4 local_99c;
  undefined8 local_998;
  undefined4 local_98c;
  undefined8 local_988;
  undefined4 local_97c;
  undefined8 local_978;
  undefined4 local_96c;
  undefined8 local_968;
  undefined4 local_95c;
  undefined1 local_958 [16];
  undefined8 local_948 [2];
  undefined8 local_938 [2];
  undefined8 local_928 [2];
  undefined1 local_918 [16];
  undefined1 local_908 [16];
  undefined1 local_8f8 [16];
  undefined8 local_8e8 [2];
  undefined1 local_8d8 [16];
  undefined1 local_8c8 [16];
  undefined8 local_8b8;
  undefined4 local_8ac;
  undefined8 local_8a8;
  undefined4 local_89c;
  undefined8 local_898;
  undefined4 local_88c;
  undefined8 local_888;
  undefined4 local_880;
  undefined4 local_87c;
  undefined8 local_878;
  undefined4 local_86c;
  undefined8 local_868;
  undefined4 local_85c;
  undefined8 local_858;
  undefined4 local_84c;
  undefined8 local_848;
  undefined4 local_83c;
  undefined8 local_838;
  undefined4 local_82c;
  undefined8 local_828;
  undefined4 local_81c;
  undefined8 local_818;
  undefined4 local_80c;
  undefined8 local_808;
  undefined4 local_7fc;
  undefined1 local_7f8 [16];
  undefined8 local_7e8;
  undefined4 local_7dc;
  undefined8 local_7d8;
  undefined4 local_7cc;
  undefined8 local_7c8;
  undefined4 local_7bc;
  undefined8 local_7b8;
  undefined4 local_7ac;
  undefined8 local_7a8;
  undefined4 local_79c;
  undefined8 local_798;
  undefined4 local_78c;
  undefined8 local_788;
  undefined4 local_77c;
  undefined8 local_778;
  undefined4 local_76c;
  undefined8 local_768;
  undefined4 local_75c;
  undefined8 local_758;
  undefined4 local_74c;
  undefined8 local_748;
  undefined4 local_73c;
  undefined8 local_738;
  undefined4 local_72c;
  undefined8 local_728;
  undefined4 local_71c;
  undefined8 local_718;
  undefined4 local_70c;
  undefined8 local_708;
  undefined4 local_6fc;
  undefined8 local_6f8;
  undefined4 local_6ec;
  undefined8 local_6e8;
  undefined4 local_6dc;
  undefined8 local_6d8;
  undefined4 local_6cc;
  undefined8 local_6c8 [2];
  undefined8 local_6b8 [2];
  undefined8 local_6a8 [2];
  undefined8 local_698 [2];
  undefined8 local_688 [2];
  undefined8 local_678;
  undefined4 local_66c;
  undefined8 local_668 [2];
  undefined8 local_658;
  undefined4 local_64c;
  undefined8 local_648;
  undefined4 local_63c;
  undefined8 local_638;
  undefined4 local_62c;
  undefined8 local_628;
  undefined4 local_61c;
  undefined8 local_618;
  undefined4 local_60c;
  undefined8 local_608;
  undefined4 local_5fc;
  undefined8 local_5f8;
  undefined4 local_5ec;
  undefined8 local_5e8;
  undefined4 local_5dc;
  undefined8 local_5d8;
  undefined4 local_5cc;
  undefined8 local_5c8;
  undefined4 local_5bc;
  undefined8 local_5b8;
  undefined4 local_5ac;
  undefined8 local_5a8 [2];
  undefined8 local_598 [2];
  undefined8 local_588 [2];
  undefined8 local_578 [2];
  undefined8 local_568 [2];
  undefined8 local_558 [2];
  undefined8 local_548;
  undefined4 local_53c;
  undefined8 local_538;
  undefined4 local_52c;
  undefined8 local_528;
  undefined4 local_51c;
  undefined8 local_518;
  undefined4 local_50c;
  undefined8 local_508;
  undefined4 local_4fc;
  undefined8 local_4f8;
  undefined4 local_4ec;
  undefined8 local_4e8;
  undefined4 local_4dc;
  undefined8 local_4d8;
  undefined4 local_4cc;
  undefined8 local_4c8;
  undefined4 local_4bc;
  undefined8 local_4b8;
  undefined4 local_4ac;
  undefined8 local_4a8;
  undefined4 local_49c;
  undefined8 local_498;
  undefined4 local_48c;
  undefined8 local_488;
  undefined4 local_47c;
  undefined8 local_478;
  undefined4 local_46c;
  undefined8 local_468;
  undefined4 local_45c;
  undefined8 local_458;
  undefined4 local_44c;
  undefined8 local_448;
  undefined4 local_43c;
  undefined8 local_438;
  undefined4 local_42c;
  undefined8 local_428;
  undefined4 local_41c;
  undefined8 local_418;
  undefined4 local_40c;
  undefined8 local_408;
  undefined4 local_3fc;
  undefined8 local_3f8;
  undefined4 local_3ec;
  undefined8 local_3e8;
  undefined4 local_3dc;
  undefined8 local_3d8;
  undefined4 local_3cc;
  undefined8 local_3c8;
  undefined4 local_3bc;
  undefined8 local_3b8;
  undefined4 local_3ac;
  undefined8 local_3a8;
  undefined4 local_39c;
  undefined8 local_398;
  undefined4 local_38c;
  undefined8 local_388;
  undefined4 local_37c;
  undefined8 local_378;
  undefined4 local_36c;
  undefined8 local_368;
  undefined4 local_35c;
  undefined8 local_358;
  undefined4 local_34c;
  undefined8 local_348;
  undefined4 local_33c;
  undefined8 local_338;
  undefined8 local_330;
  undefined4 local_324;
  undefined8 local_320;
  undefined4 local_314;
  undefined8 local_310;
  undefined4 local_304;
  undefined8 local_300;
  undefined4 local_2f4;
  undefined8 local_2f0;
  undefined4 local_2e4;
  undefined8 local_2e0;
  undefined4 local_2d4;
  undefined8 local_2d0;
  undefined4 local_2c4;
  undefined8 local_2c0;
  undefined4 local_2b4;
  undefined8 local_2b0;
  undefined4 local_2a4;
  undefined8 local_2a0;
  undefined4 local_294;
  undefined8 local_290;
  undefined4 local_284;
  undefined8 local_280;
  undefined4 local_274;
  undefined8 local_270;
  undefined4 local_264;
  undefined8 local_260;
  undefined4 local_254;
  undefined8 local_250;
  undefined4 local_244;
  undefined1 local_240 [16];
  undefined1 local_230 [16];
  undefined8 local_220;
  undefined4 local_214;
  undefined1 local_210 [16];
  undefined1 local_200 [16];
  undefined1 local_1f0 [16];
  undefined1 local_1e0 [16];
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [16];
  undefined8 local_190;
  undefined4 local_184;
  undefined8 local_180;
  undefined4 local_174;
  undefined8 local_170;
  undefined4 local_164;
  undefined8 local_160;
  undefined4 local_154;
  undefined8 local_150;
  undefined4 local_144;
  undefined8 local_140;
  undefined4 local_134;
  undefined8 local_130;
  undefined4 local_124;
  undefined1 local_120 [16];
  undefined1 local_110 [32];
  undefined1 local_f0 [176];
  
  local_res20 = 0;
  local_ab0 = "gml_Object_oRogueLevelManager_Draw_64";
  local_aa8 = 0;
  local_ab8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_ab8;
  uVar27 = 1;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_948,0x10,8,FUN_1400424d0,FUN_140041b30);
  local_3fc = 0xffffff;
  local_408 = 0;
  uVar13 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57d00);
  uVar14 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef678);
  uVar15 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef568);
  local_97c = 0xffffff;
  local_988 = 0;
  local_5ac = 0xffffff;
  local_5b8 = 0;
  local_9dc = 0xffffff;
  local_9e8 = 0;
  local_7bc = 0xffffff;
  local_7c8 = 0;
  local_76c = 0xffffff;
  local_778 = 0;
  local_5bc = 0xffffff;
  local_5c8 = 0;
  local_53c = 0xffffff;
  local_548 = 0;
  local_99c = 0xffffff;
  local_9a8 = 0;
  local_244 = 0xffffff;
  local_250 = 0;
  local_254 = 0xffffff;
  local_260 = 0;
  local_5dc = 0xffffff;
  local_5e8 = 0;
  local_77c = 0xffffff;
  local_788 = 0;
  local_78c = 0xffffff;
  local_798 = 0;
  local_79c = 0xffffff;
  local_7a8 = 0;
  local_7ac = 0xffffff;
  local_7b8 = 0;
  local_40c = 0xffffff;
  local_418 = 0;
  local_41c = 0xffffff;
  local_428 = 0;
  local_7fc = 0xffffff;
  local_808 = 0;
  local_98c = 0xffffff;
  local_998 = 0;
  local_6dc = 0xffffff;
  local_6e8 = 0;
  local_42c = 0xffffff;
  local_438 = 0;
  local_43c = 0xffffff;
  local_448 = 0;
  local_44c = 0xffffff;
  local_458 = 0;
  local_5ec = 0xffffff;
  local_5f8 = 0;
  local_95c = 0xffffff;
  local_968 = 0;
  local_96c = 0xffffff;
  local_978 = 0;
  local_84c = 0xffffff;
  local_858 = 0;
  local_85c = 0xffffff;
  local_868 = 0;
  local_88c = 0xffffff;
  local_898 = 0;
  local_89c = 0xffffff;
  local_8a8 = 0;
  local_6ec = 0xffffff;
  local_6f8 = 0;
  local_6fc = 0xffffff;
  local_708 = 0;
  local_70c = 0xffffff;
  local_718 = 0;
  local_9ac = 0xffffff;
  local_9b8 = 0;
  local_45c = 0xffffff;
  local_468 = 0;
  local_264 = 0xffffff;
  local_270 = 0;
  local_8ac = 0xffffff;
  local_8b8 = 0;
  local_71c = 0xffffff;
  local_728 = 0;
  local_274 = 0xffffff;
  local_280 = 0;
  local_72c = 0xffffff;
  local_738 = 0;
  local_73c = 0xffffff;
  local_748 = 0;
  local_46c = 0xffffff;
  local_478 = 0;
  local_5fc = 0xffffff;
  local_608 = 0;
  local_74c = 0xffffff;
  local_758 = 0;
  local_75c = 0xffffff;
  local_768 = 0;
  local_60c = 0xffffff;
  local_618 = 0;
  local_47c = 0xffffff;
  local_488 = 0;
  local_61c = 0xffffff;
  local_628 = 0;
  local_48c = 0xffffff;
  local_498 = 0;
  local_49c = 0xffffff;
  local_4a8 = 0;
  local_86c = 0xffffff;
  local_878 = 0;
  local_80c = 0xffffff;
  local_818 = 0;
  local_4ac = 0xffffff;
  local_4b8 = 0;
  local_4bc = 0xffffff;
  local_4c8 = 0;
  local_62c = 0xffffff;
  local_638 = 0;
  local_63c = 0xffffff;
  local_648 = 0;
  local_64c = 0xffffff;
  local_658 = 0;
  local_81c = 0xffffff;
  local_828 = 0;
  local_82c = 0xffffff;
  local_838 = 0;
  local_4cc = 0xffffff;
  local_4d8 = 0;
  local_4dc = 0xffffff;
  local_4e8 = 0;
  local_6cc = 0xffffff;
  local_6d8 = 0;
  local_4ec = 0xffffff;
  local_4f8 = 0;
  local_4fc = 0xffffff;
  local_508 = 0;
  local_83c = 0xffffff;
  local_848 = 0;
  local_50c = 0xffffff;
  local_518 = 0;
  local_7dc = 0xffffff;
  local_7e8 = 0;
  local_51c = 0xffffff;
  local_528 = 0;
  local_52c = 0xffffff;
  local_538 = 0;
  local_5cc = 0xffffff;
  local_5d8 = 0;
  local_38c = 0xffffff;
  local_398 = 0;
  local_39c = 0xffffff;
  local_3a8 = 0;
  local_66c = 0xffffff;
  local_678 = 0;
  local_7cc = 0xffffff;
  local_7d8 = 0;
  local_3ac = 0xffffff;
  local_3b8 = 0;
  local_3bc = 0xffffff;
  local_3c8 = 0;
  local_3cc = 0xffffff;
  local_3d8 = 0;
  local_338 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57e60);
  local_3dc = 0xffffff;
  local_3e8 = 0;
  local_3ec = 0xffffff;
  local_3f8 = 0;
  local_a84 = 0xffffff;
  local_a90 = 0;
  local_a74 = 0xffffff;
  local_a80 = 0;
  local_284 = 0xffffff;
  local_290 = 0;
  local_294 = 0xffffff;
  local_2a0 = 0;
  local_2a4 = 0xffffff;
  local_2b0 = 0;
  local_2b4 = 0xffffff;
  local_2c0 = 0;
  local_2c4 = 0xffffff;
  local_2d0 = 0;
  local_2d4 = 0xffffff;
  local_2e0 = 0;
  local_2e4 = 0xffffff;
  local_2f0 = 0;
  local_2f4 = 0xffffff;
  local_300 = 0;
  local_304 = 0xffffff;
  local_310 = 0;
  local_314 = 0xffffff;
  local_320 = 0;
  local_324 = 0xffffff;
  local_330 = 0;
  local_214 = 0xffffff;
  local_220 = 0;
  local_33c = 0xffffff;
  local_348 = 0;
  local_34c = 0xffffff;
  local_358 = 0;
  local_35c = 0xffffff;
  local_368 = 0;
  local_36c = 0xffffff;
  local_378 = 0;
  local_37c = 0xffffff;
  local_388 = 0;
  local_124 = 0xffffff;
  local_130 = 0;
  local_134 = 0xffffff;
  local_140 = 0;
  local_144 = 0xffffff;
  local_150 = 0;
  local_154 = 0xffffff;
  local_160 = 0;
  local_164 = 0xffffff;
  local_170 = 0;
  local_174 = 0xffffff;
  local_180 = 0;
  local_184 = 0xffffff;
  local_190 = 0;
  local_abc = 0xffffff;
  local_ac8 = 0;
  local_a64 = 0xffffff;
  local_a70 = 0;
  local_87c = 0xffffff;
  local_888 = 0;
  local_aa8 = 2;
  FUN_140e85f80(local_res8,DAT_1419f6b08,0x80000000,&local_408);
  local_a94 = 0xf;
  local_aa0 = 0x10000030000001f;
  iVar10 = FUN_140e851f0(&local_408,&local_aa0,DAT_141955260,0);
  if ((1 << ((byte)local_a94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_aa0);
  }
  if (iVar10 == 0) {
    local_aa8 = 2;
  }
  else {
    local_aa8 = 3;
    cVar8 = FUN_140e491e0(uVar13);
    if (cVar8 == '\0') {
      local_aa8 = 3;
    }
    else {
      local_aa8 = 4;
      cVar8 = FUN_140e491e0(uVar14);
      if (cVar8 == '\0') {
        local_aa8 = 5;
        if ((1 << ((byte)local_a84 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_a90);
        }
        local_a90 = 0;
        local_a88 = 0;
        local_a84 = 5;
        local_a94 = 0xf;
        local_aa0 = 0x10000000000010a;
        FUN_140041c60(local_948,&local_aa0);
        if ((1 << ((byte)local_a94 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_aa0);
        }
        local_a48 = local_948;
        uVar14 = CONCAT44(uVar27,DAT_141a02ef8);
        uVar13 = FUN_140e634e0(local_res8,local_res10,&local_a90,1,uVar14,&local_a48);
        uVar27 = (undefined4)((ulonglong)uVar14 >> 0x20);
        cVar8 = FUN_140e491e0(uVar13);
        if (cVar8 == '\0') {
          if ((1 << ((byte)local_a74 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_a80);
          }
          local_a80 = 0;
          local_a78 = 0;
          local_a74 = 5;
          local_a94 = 0xf;
          local_aa0 = 0x100000000000079;
          FUN_140041c60(local_938,&local_aa0);
          if ((1 << ((byte)local_a94 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_aa0);
          }
          local_a40 = local_938;
          uVar14 = CONCAT44(uVar27,DAT_141a02ef8);
          uVar13 = FUN_140e634e0(local_res8,local_res10,&local_a80,1,uVar14,&local_a40);
          uVar27 = (undefined4)((ulonglong)uVar14 >> 0x20);
          cVar8 = FUN_140e491e0(uVar13);
          if (cVar8 == '\0') {
            local_aa8 = 6;
            cVar8 = FUN_140e491e0(uVar15);
            if (cVar8 == '\0') {
              local_aa8 = 8;
              FUN_140044220(&local_988,5);
              local_aa8 = 9;
              FUN_140044220(&local_5b8,10);
              local_aa8 = 0xb;
              plVar16 = (longlong *)FUN_140042490(local_res8,DAT_1419f99f8);
              uVar13 = FUN_1400467d0(&local_aa0,&local_988,&local_988);
              uVar24 = 0;
              if ((*(int *)((longlong)plVar16 + 0xc) == 2) && (*plVar16 != 0)) {
                uVar24 = *(undefined4 *)(*plVar16 + 0x24);
              }
              cVar8 = FUN_140ce0bc0(uVar24,uVar13);
              FUN_140041b30(&local_aa0);
              if (cVar8 == '\0') {
                local_aa8 = 0xd;
                FUN_140044220(&local_9e8,0x40);
                local_aa8 = 0xf;
                uVar13 = FUN_140081e90(&local_aa0,&local_9e8,0x4000000000000000);
                FUN_140041c60(&local_7c8,uVar13);
                FUN_140041b30(&local_aa0);
                local_aa8 = 0x10;
                uVar13 = FUN_140081e90(&local_aa0,&local_9e8,0x4000000000000000);
                FUN_140041c60(&local_778,uVar13);
                FUN_140041b30(&local_aa0);
                local_aa8 = 0x12;
                uVar13 = FUN_1400464c0(local_a08,0x1e0,&local_9e8);
                uVar13 = FUN_140053940(&local_aa0,uVar13,6);
                FUN_140041c60(&local_5c8,uVar13);
                FUN_140041b30(&local_aa0);
                FUN_140041b30(local_a08);
                local_aa8 = 0x13;
                uVar13 = FUN_1400464c0(local_a08,0x10e,&local_9e8);
                uVar13 = FUN_140053940(&local_aa0,uVar13,4);
                FUN_140041c60(&local_548,uVar13);
                FUN_140041b30(&local_aa0);
                FUN_140041b30(local_a08);
                local_aa8 = 0x15;
                if ((1 << ((byte)local_a84 & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_a90);
                }
                local_a90 = 0;
                local_a88 = 0;
                local_a84 = 5;
                if ((1 << ((byte)local_a74 & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_a80);
                }
                local_a80 = 0;
                local_a78 = 0;
                local_a74 = 5;
                FUN_140e85f80(local_res8,DAT_141a00d08,0,&local_9a8);
                FUN_140041c60(local_948,&local_9a8);
                local_a48 = local_948;
                FUN_140041c60(local_938,&local_9a8);
                local_a40 = local_938;
                uVar13 = FUN_1400b46b0(local_9d8,&local_9e8,0x3fe0000000000000);
                uVar15 = CONCAT44(uVar27,DAT_141a00c98);
                uVar14 = FUN_140e634e0(local_res8,local_res10,&local_a80,1,uVar15,&local_a40);
                uVar18 = CONCAT44((int)((ulonglong)uVar15 >> 0x20),DAT_141a00e38);
                uVar15 = FUN_140e634e0(local_res8,local_res10,&local_a90,1,uVar18,&local_a48);
                uVar27 = (undefined4)((ulonglong)uVar18 >> 0x20);
                uVar14 = FUN_140046230(local_9c8,uVar15,uVar14);
                uVar13 = FUN_140046450(local_a08,uVar14,uVar13);
                uVar13 = FUN_140053820(&local_aa0,uVar13,2);
                FUN_140041c60(&local_250,uVar13);
                FUN_140041b30(&local_aa0);
                FUN_140041b30(local_a08);
                FUN_140041b30(local_9c8);
                FUN_140041b30(local_9d8);
                local_aa8 = 0x16;
                if ((1 << ((byte)local_a84 & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_a90);
                }
                local_a90 = 0;
                local_a88 = 0;
                local_a84 = 5;
                if ((1 << ((byte)local_a74 & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_a80);
                }
                local_a80 = 0;
                local_a78 = 0;
                local_a74 = 5;
                FUN_140e85f80(local_res8,DAT_141a00d08,0,&local_9a8);
                FUN_140041c60(local_948,&local_9a8);
                local_a48 = local_948;
                FUN_140041c60(local_938,&local_9a8);
                local_a40 = local_938;
                uVar13 = FUN_1400b46b0(local_9d8,&local_9e8,0x3fe0000000000000);
                uVar15 = CONCAT44(uVar27,DAT_141a00d58);
                uVar14 = FUN_140e634e0(local_res8,local_res10,&local_a80,1,uVar15,&local_a40);
                uVar18 = CONCAT44((int)((ulonglong)uVar15 >> 0x20),DAT_141a00dd8);
                uVar15 = FUN_140e634e0(local_res8,local_res10,&local_a90,1,uVar18,&local_a48);
                uVar27 = (undefined4)((ulonglong)uVar18 >> 0x20);
                uVar14 = FUN_140046230(local_9c8,uVar15,uVar14);
                uVar13 = FUN_140046450(local_a08,uVar14,uVar13);
                uVar13 = FUN_140053820(&local_aa0,uVar13,2);
                FUN_140041c60(&local_260,uVar13);
                FUN_140041b30(&local_aa0);
                FUN_140041b30(local_a08);
                FUN_140041b30(local_9c8);
                FUN_140041b30(local_9d8);
                local_aa8 = 0x18;
                if ((1 << ((byte)local_a84 & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_a90);
                }
                local_a90 = 0;
                local_a88 = 0;
                local_a84 = 5;
                uVar13 = FUN_1400b46b0(&local_aa0,&local_988,0x3fe0000000000000);
                FUN_140041c60(local_948,uVar13);
                FUN_140041b30(&local_aa0);
                local_a48 = local_948;
                uVar13 = FUN_140e634e0(local_res8,local_res10,&local_a90,1,
                                       CONCAT44(uVar27,DAT_1419fe728),&local_a48);
                FUN_140041c60(&local_5e8,uVar13);
                local_aa8 = 0x1a;
                uVar13 = FUN_140042490(local_res8,DAT_1419f5eb8);
                FUN_140e87170(uVar13,DAT_1419fe0e8,0x80000000,&local_788,local_res8,local_res10);
                uVar13 = FUN_140046450(&local_aa0,&local_788,&local_5e8);
                FUN_140041c60(&local_798,uVar13);
                FUN_140041b30(&local_aa0);
                local_aa8 = 0x1b;
                uVar13 = FUN_140042490(local_res8,DAT_1419f5eb8);
                uVar20 = local_res8;
                FUN_140e87170(uVar13,DAT_1419fe158,0x80000000,&local_7a8,local_res8,local_res10);
                uVar27 = (undefined4)(uVar20 >> 0x20);
                uVar13 = FUN_140046450(&local_aa0,&local_7a8,&local_5e8);
                FUN_140041c60(&local_7b8,uVar13);
                FUN_140041b30(&local_aa0);
                local_aa8 = 0x1c;
                uVar13 = FUN_140046230(local_a08,&local_798,&local_988);
                uVar13 = FUN_140053940(&local_aa0,uVar13,1);
                FUN_140041c60(&local_418,uVar13);
                FUN_140041b30(&local_aa0);
                FUN_140041b30(local_a08);
                local_aa8 = 0x1d;
                uVar13 = FUN_140046230(local_9c8,&local_7b8,&local_988);
                uVar13 = FUN_140053940(&local_aa0,uVar13,1);
                FUN_140041c60(&local_428,uVar13);
                FUN_140041b30(&local_aa0);
                FUN_140041b30(local_9c8);
                local_aa8 = 0x1f;
                uVar13 = FUN_140053940(local_9d8,&local_988,1);
                uVar13 = FUN_1400b46b0(&local_aa0,uVar13,0x3fe0000000000000);
                FUN_140041c60(&local_808,uVar13);
                FUN_140041b30(&local_aa0);
                FUN_140041b30(local_9d8);
                local_aa8 = 0x21;
                if ((1 << ((byte)local_a84 & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_a90);
                }
                local_a90 = 0;
                local_a88 = 0;
                local_a84 = 5;
                uVar13 = FUN_140042490(local_res8,DAT_1419f9d08);
                FUN_140041c60(local_948,uVar13);
                local_a48 = local_948;
                uVar15 = CONCAT44(uVar27,DAT_141a04798);
                uVar14 = FUN_140e634e0(local_res8,local_res10,&local_a90,1,uVar15,&local_a48);
                uVar27 = (undefined4)((ulonglong)uVar15 >> 0x20);
                cVar8 = FUN_140e491e0(uVar14);
                if (cVar8 == '\0') {
                  local_aa8 = 0x23;
                  if ((1 << ((byte)local_a74 & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_a80);
                  }
                  local_a80 = 0;
                  local_a78 = 0;
                  local_a74 = 5;
                  uVar14 = FUN_1400419a0(local_res8,DAT_1419f9d08);
                  local_a40 = &local_9e8;
                  local_a38 = &local_9e8;
                  FUN_140e609c0(local_res8);
                  uVar18 = CONCAT44(uVar27,DAT_141a04a78);
                  uVar15 = FUN_140e634e0(local_res8,local_res10,&local_a80,2,uVar18,&local_a40);
                  uVar27 = (undefined4)((ulonglong)uVar18 >> 0x20);
                  FUN_140041c60(uVar14,uVar15);
                  FUN_140e60910(1);
                }
                local_aa8 = 0x26;
                dVar1 = (double)FUN_140041980(uVar13);
                FUN_140ec60c0((longlong)dVar1,0xffffffff);
                local_aa8 = 0x27;
                if ((1 << ((byte)local_a84 & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_a90);
                }
                local_a90 = 0;
                local_a88 = 0;
                local_a84 = 5;
                FUN_1400441d0(local_948,&DAT_1419ed740);
                local_a48 = local_948;
                FUN_1400441d0(local_938,&DAT_141dc75e0);
                local_a40 = local_938;
                uVar13 = CONCAT44(uVar27,DAT_141a04558);
                FUN_140e634e0(local_res8,local_res10,&local_a90,2,uVar13,&local_a48);
                uVar27 = (undefined4)((ulonglong)uVar13 >> 0x20);
                local_aa8 = 0x29;
                uVar13 = FUN_140045f40(&local_aa0,0x100019f,1);
                dVar1 = (double)FUN_140041980(&local_778);
                dVar2 = (double)FUN_140041980(&local_7c8);
                dVar3 = (double)FUN_140041980(uVar13);
                FUN_140ec5d30(local_res8,(int)dVar3,0,(float)dVar2,CONCAT44(uVar27,(float)dVar1));
                FUN_140041b30(&local_aa0);
                local_aa8 = 0x2b;
                FUN_140044220(&local_998,0);
                bVar7 = true;
                while( true ) {
                  uVar27 = (undefined4)((ulonglong)in_stack_fffffffffffff488 >> 0x20);
                  uVar24 = (undefined4)((ulonglong)in_stack_fffffffffffff490 >> 0x20);
                  uVar30 = (undefined4)((ulonglong)in_stack_fffffffffffff498 >> 0x20);
                  uVar12 = (undefined4)((ulonglong)in_stack_fffffffffffff4a0 >> 0x20);
                  if (!bVar7) {
                    local_aa8 = 0x2b;
                    FUN_140042490(local_res8,DAT_1419f9d08);
                    FUN_140046040(&local_998);
                  }
                  bVar7 = false;
                  plVar16 = (longlong *)FUN_140042490(local_res8,DAT_1419f9c38);
                  uVar11 = 0;
                  if ((*(int *)((longlong)plVar16 + 0xc) == 2) && (*plVar16 != 0)) {
                    uVar11 = *(undefined4 *)(*plVar16 + 0x24);
                  }
                  cVar8 = FUN_140046bf0(&local_998,uVar11);
                  if (cVar8 == '\0') break;
                  local_aa8 = 0x2d;
                  uVar13 = FUN_140042490(local_res8,DAT_1419f9c38);
                  uVar11 = thunk_FUN_140e4a740(&local_998);
                  uVar13 = FUN_140044270(uVar13,uVar11);
                  FUN_140041c60(&local_6e8,uVar13);
                  local_aa8 = 0x2e;
                  FUN_140e87170(&local_6e8,DAT_141a0a728,0x80000000,&local_438,local_res8,
                                local_res10);
                  uVar20 = local_res8;
                  uVar19 = local_res10;
                  FUN_140e87170(&local_6e8,DAT_141a0cfc8,0x80000000,&local_448,local_res8,
                                local_res10);
                  uVar19 = uVar19 & 0xffffffffffffff00;
                  uVar20 = uVar20 & 0xffffffffffffff00;
                  FUN_140e87440(&local_6e8,DAT_141a0a7f8,0x80000000,&local_458,uVar20,uVar19);
                  uVar11 = (undefined4)(uVar20 >> 0x20);
                  uVar29 = (undefined4)(uVar19 >> 0x20);
                  dVar1 = (double)FUN_140041980(&local_458);
                  dVar2 = (double)FUN_140041980(&local_778);
                  dVar3 = (double)FUN_140041980(&local_7c8);
                  dVar4 = (double)FUN_140041980(&local_448);
                  dVar5 = (double)FUN_140041980(&local_438);
                  in_stack_fffffffffffff4a0 = CONCAT44(uVar12,0x3f800000);
                  in_stack_fffffffffffff498 = CONCAT44(uVar30,0xffffff);
                  in_stack_fffffffffffff490 = CONCAT44(uVar24,(float)dVar1);
                  in_stack_fffffffffffff488 = CONCAT44(uVar27,0x3f800000);
                  FUN_140ec5dd0(local_res8,(longlong)dVar5,(float)dVar4,(float)dVar3,
                                CONCAT44(uVar11,(float)dVar2),CONCAT44(uVar29,0x3f800000),
                                in_stack_fffffffffffff488,in_stack_fffffffffffff490,
                                in_stack_fffffffffffff498,in_stack_fffffffffffff4a0);
                }
                local_aa8 = 0x31;
                local_res18 = FUN_140e8da20(&local_180,local_res8,2,&DAT_1419ed700,&DAT_1419ed700);
                local_668[0] = FUN_140e8da20(&local_170,local_res8,2,&DAT_1419ed710,&DAT_1419ed760);
                local_688[0] = FUN_140e8da20(&local_160,local_res8,2,&DAT_141dc75e0,&DAT_1419ed710);
                local_5a8[0] = FUN_140e8da20(&local_150,local_res8,2,&DAT_1419ed6c0,&DAT_1419ed760);
                local_588[0] = FUN_140e8da20(&local_140,local_res8,2,&DAT_1419ed6d0,&DAT_1419ed700);
                local_6b8[0] = FUN_140e8da20(&local_130,local_res8,2,&DAT_1419ed760,&DAT_1419ed710);
                local_6a8[0] = FUN_140e8da20(&local_388,local_res8,2,&DAT_1419ed750,&DAT_1419ed750);
                local_698[0] = FUN_140e8da20(&local_378,local_res8,2,&DAT_141dc75e0,&DAT_141dc75e0);
                local_558[0] = FUN_140e8da20(&local_368,local_res8,2,&DAT_1419ed6f0,&DAT_1419ed750);
                local_568[0] = FUN_140e8da20(&local_358,local_res8,2,&DAT_1419ed6e0,&DAT_1419ed710);
                local_598[0] = FUN_140e8da20(&local_348,local_res8,2,&DAT_1419ed710,&DAT_141dc75e0);
                local_578[0] = FUN_140e8da20(&local_220,local_res8,2,&DAT_141dc75e0,&DAT_141dc75e0);
                local_6c8[0] = FUN_140e8da20(&local_330,local_res8,2,&DAT_141dc75e0,&DAT_141dc75e0);
                local_9d8[0] = FUN_140e8da20(&local_320,local_res8,2,&DAT_141dc75e0,&DAT_141dc75e0);
                local_9c8[0] = FUN_140e8da20(&local_310,local_res8,2,&DAT_1419ed6c0,&DAT_141dc75e0);
                local_a08[0] = FUN_140e8da20(&local_300,local_res8,2,&DAT_1419ed760,&DAT_1419ed6c0);
                local_aa0 = FUN_140e8da20(&local_2f0,local_res8,2,&DAT_1419ed750,&DAT_1419ed6f0);
                uVar13 = FUN_140e8da20(&local_2e0,local_res8,2,&DAT_141dc75e0,&DAT_141dc75e0);
                uVar14 = FUN_140e8da20(&local_2d0,local_res8,2,&DAT_1419ed6f0,&DAT_1419ed6f0);
                uVar15 = FUN_140e8da20(&local_2c0,local_res8,2,&DAT_1419ed6e0,&DAT_1419ed6c0);
                uVar17 = FUN_140e8da20(&local_2b0,local_res8,2,&DAT_1419ed700,&DAT_1419ed6d0);
                uVar18 = FUN_140e8da20(&local_2a0,local_res8,2,&DAT_1419ed710,&DAT_1419ed6e0);
                uVar19 = FUN_140e8da20(&local_290,local_res8,2,&DAT_141dc75e0,&DAT_1419ed6c0);
                uVar20 = FUN_140e8da20(&local_a80,local_res8,2,&DAT_1419ed6c0,&DAT_1419ed6e0);
                uVar21 = FUN_140e8da20(&local_a90,local_res8,2,&DAT_1419ed6d0,&DAT_1419ed6d0);
                uVar13 = FUN_140e8da20(&local_190,local_res8,0x19,uVar21,uVar20,uVar19,uVar18,uVar17
                                       ,uVar15,uVar14,uVar13,local_aa0,local_a08[0],local_9c8[0],
                                       local_9d8[0],local_6c8[0],local_578[0],local_598[0],
                                       local_568[0],local_558[0],local_698[0],local_6a8[0],
                                       local_6b8[0],local_588[0],local_5a8[0],local_688[0],
                                       local_668[0],local_res18);
                FUN_140041c60(&local_5f8,uVar13);
                local_aa8 = 0x39;
                FUN_140041c60(&local_968,&local_7b8);
                bVar7 = true;
LAB_140d35df4:
                if (!bVar7) {
                  local_aa8 = 0x39;
                  FUN_140046040(&local_968);
                }
                cVar8 = FUN_140046c60(&local_968,&local_428);
                if (cVar8 != '\0') {
                  local_aa8 = 0x3a;
                  FUN_140041c60(&local_978,&local_798);
                  bVar7 = true;
                  do {
                    uVar23 = local_res20;
                    do {
                      do {
                        if (!bVar7) {
                          local_aa8 = 0x3a;
                          FUN_140046040(&local_978);
                        }
                        bVar7 = false;
                        cVar8 = FUN_140046c60(&local_978,&local_418);
                        uVar27 = (undefined4)((ulonglong)uVar18 >> 0x20);
                        uVar24 = (undefined4)((ulonglong)uVar15 >> 0x20);
                        uVar30 = (undefined4)((ulonglong)uVar14 >> 0x20);
                        if (cVar8 == '\0') {
                          bVar7 = false;
                          goto LAB_140d35df4;
                        }
                        local_aa8 = 0x3c;
                        uVar13 = FUN_140046450(&local_aa0,&local_978,&local_798);
                        FUN_140041c60(&local_858,uVar13);
                        FUN_140041b30(&local_aa0);
                        local_aa8 = 0x3d;
                        uVar13 = FUN_140046450(local_a08,&local_968,&local_7b8);
                        FUN_140041c60(&local_868,uVar13);
                        FUN_140041b30(local_a08);
                        local_aa8 = 0x3e;
                        uVar13 = FUN_1400467d0(local_9d8,&local_868,&local_988);
                        uVar13 = FUN_140046230(local_9c8,uVar13,&local_858);
                        FUN_140041c60(&local_998,uVar13);
                        FUN_140041b30(local_9c8);
                        FUN_140041b30(local_9d8);
                        local_aa8 = 0x40;
                        uVar13 = FUN_140046450(local_578,&local_858,&local_808);
                        uVar13 = FUN_1400467d0(local_6c8,uVar13,&local_5b8);
                        FUN_140041c60(&local_898,uVar13);
                        FUN_140041b30(local_6c8);
                        FUN_140041b30(local_578);
                        local_aa8 = 0x41;
                        uVar13 = FUN_140046450(local_568,&local_868,&local_808);
                        uVar13 = FUN_1400467d0(local_598,uVar13,&local_5b8);
                        FUN_140041c60(&local_8a8,uVar13);
                        FUN_140041b30(local_598);
                        FUN_140041b30(local_568);
                        local_aa8 = 0x43;
                        uVar13 = FUN_140046230(local_698,&local_7c8,&local_898);
                        uVar12 = thunk_FUN_140e4a740(&local_998);
                        uVar14 = FUN_140044270(&local_5f8,uVar12);
                        uVar14 = FUN_140044270(uVar14,0);
                        uVar13 = FUN_140046230(local_558,uVar13,uVar14);
                        FUN_140041c60(&local_6f8,uVar13);
                        FUN_140041b30(local_558);
                        FUN_140041b30(local_698);
                        local_aa8 = 0x44;
                        uVar13 = FUN_140046230(local_6b8,&local_778,&local_8a8);
                        uVar12 = thunk_FUN_140e4a740(&local_998);
                        uVar14 = FUN_140044270(&local_5f8,uVar12);
                        uVar14 = FUN_140044270(uVar14,1);
                        uVar13 = FUN_140046230(local_6a8,uVar13,uVar14);
                        FUN_140041c60(&local_708,uVar13);
                        FUN_140041b30(local_6a8);
                        FUN_140041b30(local_6b8);
                        local_aa8 = 0x46;
                        uVar9 = 0;
                        cVar8 = FUN_140046dd0(&local_978,0);
                        if (cVar8 != '\0') {
                          uVar13 = FUN_140042490(local_res8,DAT_141a57b70);
                          cVar8 = FUN_140046bc0(&local_978,uVar13);
                          if (cVar8 != '\0') {
                            cVar8 = FUN_140046dd0(&local_968,0);
                            if (cVar8 != '\0') {
                              uVar13 = FUN_140042490(local_res8,DAT_141a57b70);
                              uVar9 = FUN_140046bc0(&local_968,uVar13);
                            }
                          }
                        }
                        FUN_140041d00(&local_718,uVar9);
                        local_aa8 = 0x48;
                        uVar13 = FUN_140042490(local_res8,DAT_1419f99f8);
                        uVar12 = thunk_FUN_140e4a740(&local_998);
                        uVar13 = FUN_140044270(uVar13,uVar12);
                        FUN_140041c60(&local_9b8,uVar13);
                        local_aa8 = 0x49;
                        if ((1 << ((byte)local_abc & 0x1f) & 0x46U) != 0) {
                          FUN_140041a50(&local_ac8);
                        }
                        local_ac8 = 0;
                        local_ac0 = 0;
                        local_abc = 5;
                        FUN_140e87440(&local_9b8,DAT_141a0a968,0x80000000,&local_468,
                                      uVar20 & 0xffffffffffffff00,uVar19 & 0xffffffffffffff00);
                        uVar13 = FUN_140069500(&local_9b8);
                        puVar26 = &local_468;
                        FUN_140e63610(uVar13,local_res10,&local_ac8,0,puVar26,0);
                        uVar12 = (undefined4)((ulonglong)puVar26 >> 0x20);
                        local_aa8 = 0x4b;
                        cVar8 = thunk_FUN_140e491e0(&local_718);
                        if (cVar8 == '\0') {
                          uVar13 = FUN_140045f40(local_588,0x100011b,1);
                          uVar23 = uVar23 | 2;
                        }
                        else {
                          puVar25 = &local_res10;
                          uVar13 = FUN_140d38cc0(local_f0,&local_9b8,&local_270,&local_res8,puVar25)
                          ;
                          uVar12 = (undefined4)((ulonglong)puVar25 >> 0x20);
                          uVar13 = FUN_140d38c30(uVar13,local_5a8);
                          uVar23 = uVar23 | 1;
                        }
                        local_res20 = uVar23;
                        FUN_140041c60(&local_8b8,uVar13);
                        if ((uVar23 & 2) != 0) {
                          uVar23 = uVar23 & 0xfffffffd;
                          local_res20 = uVar23;
                          FUN_140041b30(local_588);
                        }
                        if ((uVar23 & 1) != 0) {
                          uVar23 = uVar23 & 0xfffffffe;
                          local_res20 = uVar23;
                          FUN_140041b30(local_5a8);
                        }
                        local_aa8 = 0x4c;
                        cVar8 = thunk_FUN_140e491e0(&local_718);
                        if (cVar8 == '\0') {
                          uVar13 = FUN_140041c20(local_688,0);
                          uVar23 = uVar23 | 8;
                        }
                        else {
                          uVar13 = FUN_1400424f0(local_668,&local_998);
                          uVar23 = uVar23 | 4;
                        }
                        local_res20 = uVar23;
                        FUN_140041c60(&local_728,uVar13);
                        if ((uVar23 & 8) != 0) {
                          uVar23 = uVar23 & 0xfffffff7;
                          local_res20 = uVar23;
                          FUN_140041b30(local_688);
                        }
                        if ((uVar23 & 4) != 0) {
                          uVar23 = uVar23 & 0xfffffffb;
                          local_res20 = uVar23;
                          FUN_140041b30(local_668);
                        }
                        local_aa8 = 0x4e;
                        if ((1 << ((byte)local_abc & 0x1f) & 0x46U) != 0) {
                          FUN_140041a50(&local_ac8);
                        }
                        local_ac8 = 0;
                        local_ac0 = 0;
                        local_abc = 5;
                        if ((1 << ((byte)local_a64 & 0x1f) & 0x46U) != 0) {
                          FUN_140041a50(&local_a70);
                        }
                        local_a70 = 0;
                        local_a68 = 0;
                        local_a64 = 5;
                        local_a48 = &local_8b8;
                        uVar14 = CONCAT44(uVar12,DAT_141a089e8);
                        uVar13 = FUN_140e634e0(local_res8,local_res10,&local_a70,1,uVar14,&local_a48
                                              );
                        uVar12 = (undefined4)((ulonglong)uVar14 >> 0x20);
                        FUN_140041c60(local_938,uVar13);
                        local_a40 = local_938;
                        FUN_1400441d0(local_928,&DAT_141dc75e0);
                        local_a38 = local_928;
                        FUN_1400441d0(local_918,&DAT_1419ed6f0);
                        local_a30 = local_918;
                        ppuVar28 = &local_a40;
                        uVar20 = CONCAT44(uVar12,DAT_141a090e8);
                        uVar13 = FUN_140e634e0(local_res8,local_res10,&local_ac8,3,uVar20,ppuVar28);
                        FUN_140041c60(&local_280,uVar13);
                        local_aa8 = 0x4f;
                        FUN_140041c60(&local_738,&local_8b8);
                        local_aa8 = 0x51;
                        if ((1 << ((byte)local_abc & 0x1f) & 0x46U) != 0) {
                          FUN_140041a50(&local_ac8);
                        }
                        local_ac8 = 0;
                        local_ac0 = 0;
                        local_abc = 5;
                        uVar20 = uVar20 & 0xffffffffffffff00;
                        FUN_140e87440(&local_9b8,DAT_1419f9dc8,0x80000000,&local_748,uVar20,
                                      (ulonglong)ppuVar28 & 0xffffffffffffff00);
                        uVar12 = (undefined4)(uVar20 >> 0x20);
                        FUN_140041c60(local_948,&local_748);
                        local_a48 = local_948;
                        uVar20 = CONCAT44(uVar12,DAT_1419fcb88);
                        ppuVar28 = &local_a48;
                        uVar13 = FUN_140e634e0(local_res8,local_res10,&local_ac8,1,uVar20,&local_a48
                                              );
                        cVar8 = FUN_140e491e0(uVar13);
                        if (cVar8 != '\0') {
                          local_aa8 = 0x53;
                          uVar13 = FUN_140045f40(local_240,0x100011b,1);
                          cVar8 = FUN_140042730(&local_8b8,uVar13);
                          FUN_140041b30(local_240);
                          if (cVar8 != '\0') {
                            local_aa8 = 0x55;
                            uVar19 = (ulonglong)ppuVar28 & 0xffffffffffffff00;
                            uVar20 = uVar20 & 0xffffffffffffff00;
                            FUN_140e87440(&local_9b8,DAT_1419f9dc8,0x80000000,&local_748,uVar20,
                                          uVar19);
                            uVar20 = uVar20 & 0xffffffffffffff00;
                            FUN_140e87440(&local_748,DAT_1419f6118,0x80000000,&local_478,uVar20,
                                          uVar19 & 0xffffffffffffff00);
                            cVar8 = FUN_140e491e0(&local_478);
                            uVar12 = (undefined4)(uVar20 >> 0x20);
                            if (cVar8 == '\0') {
                              local_aa8 = 0x57;
                              if ((1 << ((byte)local_a64 & 0x1f) & 0x46U) != 0) {
                                FUN_140041a50(&local_a70);
                              }
                              local_a70 = 0;
                              local_a68 = 0;
                              local_a64 = 5;
                              if ((1 << ((byte)local_87c & 0x1f) & 0x46U) != 0) {
                                FUN_140041a50(&local_888);
                              }
                              local_888 = 0;
                              local_880 = 0;
                              local_87c = 5;
                              local_a40 = &local_8b8;
                              uVar13 = FUN_1400424f0(local_120,&DAT_141ddb258);
                              uVar15 = CONCAT44(uVar12,DAT_141a089e8);
                              uVar14 = FUN_140e634e0(local_res8,local_res10,&local_888,1,uVar15,
                                                     &local_a40);
                              uVar12 = (undefined4)((ulonglong)uVar15 >> 0x20);
                              uVar13 = FUN_140046230(local_230,uVar14,uVar13);
                              FUN_140041c60(local_928,uVar13);
                              FUN_140041b30(local_230);
                              FUN_140041b30(local_120);
                              local_a38 = local_928;
                              uVar14 = CONCAT44(uVar12,DAT_141a086f8);
                              uVar13 = FUN_140e634e0(local_res8,local_res10,&local_a70,1,uVar14,
                                                     &local_a38);
                              uVar12 = (undefined4)((ulonglong)uVar14 >> 0x20);
                              FUN_140041c60(&local_608,uVar13);
                              local_aa8 = 0x58;
                              if ((1 << ((byte)local_abc & 0x1f) & 0x46U) != 0) {
                                FUN_140041a50(&local_ac8);
                              }
                              local_ac8 = 0;
                              local_ac0 = 0;
                              local_abc = 5;
                              local_a48 = &local_608;
                              uVar20 = CONCAT44(uVar12,DAT_141a04628);
                              uVar13 = FUN_140e634e0(local_res8,local_res10,&local_ac8,1,uVar20,
                                                     &local_a48);
                              cVar8 = FUN_140e491e0(uVar13);
                              if (cVar8 != '\0') {
                                local_aa8 = 0x59;
                                FUN_140041c60(&local_738,&local_608);
                              }
                            }
                          }
                        }
                        uVar12 = (undefined4)(uVar20 >> 0x20);
                        local_aa8 = 0x5e;
                        if ((1 << ((byte)local_abc & 0x1f) & 0x46U) != 0) {
                          FUN_140041a50(&local_ac8);
                        }
                        local_ac8 = 0;
                        local_ac0 = 0;
                        local_abc = 5;
                        if ((1 << ((byte)local_a64 & 0x1f) & 0x46U) != 0) {
                          FUN_140041a50(&local_a70);
                        }
                        local_a70 = 0;
                        local_a68 = 0;
                        local_a64 = 5;
                        local_a48 = &local_738;
                        FUN_1400441d0(local_938,&DAT_1419ed6f0);
                        local_a40 = local_938;
                        uVar20 = CONCAT44(uVar12,DAT_141a049b8);
                        ppuVar28 = &local_a48;
                        uVar13 = FUN_140e634e0(local_res8,local_res10,&local_a70,1,uVar20,&local_a48
                                              );
                        FUN_140041c60(local_928,uVar13);
                        local_a38 = local_928;
                        uVar13 = FUN_140e79090(&local_ac8,2,&local_a40);
                        uVar13 = FUN_140046af0(local_210,&local_728,uVar13);
                        FUN_140041c60(&local_728,uVar13);
                        FUN_140041b30(local_210);
                        local_aa8 = 0x60;
                        uVar19 = (ulonglong)ppuVar28 & 0xffffffffffffff00;
                        uVar20 = uVar20 & 0xffffffffffffff00;
                        FUN_140e87440(&local_9b8,DAT_1419f9ed8,0x80000000,&local_758,uVar20,uVar19);
                        uVar12 = (undefined4)(uVar20 >> 0x20);
                        uVar11 = (undefined4)(uVar19 >> 0x20);
                        dVar1 = (double)FUN_140041980(&local_758);
                        dVar2 = (double)FUN_140041980(&local_708);
                        dVar3 = (double)FUN_140041980(&local_6f8);
                        dVar4 = (double)FUN_140041980(&local_728);
                        dVar5 = (double)FUN_140041980(&local_738);
                        uVar14 = CONCAT44(uVar30,0x3f800000);
                        uVar15 = CONCAT44(uVar24,0xffffff);
                        uVar17 = uVar17 & 0xffffffff00000000;
                        uVar18 = CONCAT44(uVar27,0x3f800000);
                        uVar19 = CONCAT44(uVar11,(float)dVar1);
                        uVar20 = CONCAT44(uVar12,(float)dVar2);
                        FUN_140ec5dd0(local_res8,(longlong)dVar5,(float)dVar4,(float)dVar3,uVar20,
                                      uVar19,uVar18,uVar17,uVar15,uVar14);
                        local_aa8 = 0x62;
                        uVar13 = FUN_140045f40(local_200,0x100011b,1);
                        cVar8 = FUN_140042730(&local_8b8,uVar13);
                        FUN_140041b30(local_200);
                        if (cVar8 != '\0') {
                          local_aa8 = 99;
                          if ((1 << ((byte)local_abc & 0x1f) & 0x46U) != 0) {
                            FUN_140041a50(&local_ac8);
                          }
                          local_ac8 = 0;
                          local_ac0 = 0;
                          local_abc = 5;
                          uVar20 = 0;
                          gml_Script____struct___212_pal_swap_set_layer_scr_retro_pal_swapper
                                    (local_res8,local_res10,&local_ac8,0,0);
                        }
                        local_aa8 = 0x65;
                        cVar8 = thunk_FUN_140e491e0(&local_718);
                        if (cVar8 != '\0') {
                          uVar13 = FUN_140045f40(local_1f0,0x100011b,1);
                          cVar8 = FUN_140042730(&local_8b8,uVar13);
                          FUN_140041b30(local_1f0);
                          if (cVar8 != '\0') {
                            uVar19 = uVar19 & 0xffffffffffffff00;
                            uVar20 = uVar20 & 0xffffffffffffff00;
                            FUN_140e87440(&local_9b8,DAT_1419f9978,0x80000000,&local_768,uVar20,
                                          uVar19);
                            cVar8 = FUN_140081f30(&local_768,0);
                            if (cVar8 != '\0') {
                              local_aa8 = 0x67;
                              uVar13 = FUN_140053940(local_1e0,&local_988,1);
                              FUN_140041c60(&local_618,uVar13);
                              FUN_140041b30(local_1e0);
                              local_aa8 = 0x68;
                              uVar9 = 0;
                              cVar8 = FUN_140041d90(&local_858,0);
                              if (cVar8 == '\0') {
                                cVar8 = FUN_140041d70(&local_858,&local_618);
                                if (cVar8 != '\0') goto LAB_140d36b77;
                              }
                              else {
LAB_140d36b77:
                                cVar8 = FUN_140041d90(&local_868,0);
                                if (cVar8 == '\0') {
                                  uVar9 = FUN_140041d70(&local_868,&local_618);
                                }
                                else {
                                  uVar9 = 1;
                                }
                              }
                              FUN_140041d00(&local_488,uVar9);
                              local_aa8 = 0x69;
                              if ((1 << ((byte)local_abc & 0x1f) & 0x46U) != 0) {
                                FUN_140041a50(&local_ac8);
                              }
                              local_ac8 = 0;
                              local_ac0 = 0;
                              local_abc = 5;
                              uVar13 = FUN_140046450(local_1d0,&local_858,&local_808);
                              FUN_140041980(uVar13);
                              uVar13 = FUN_140e78d00();
                              FUN_140041cb0(local_948,uVar13);
                              FUN_140041b30(local_1d0);
                              local_a48 = local_948;
                              uVar13 = FUN_140046450(local_1c0,&local_868,&local_808);
                              FUN_140041980(uVar13);
                              uVar13 = FUN_140e78d00();
                              FUN_140041cb0(local_938,uVar13);
                              FUN_140041b30(local_1c0);
                              local_a40 = local_938;
                              uVar13 = FUN_140e79090(&local_ac8,2,&local_a48);
                              FUN_140041c60(&local_628,uVar13);
                              local_aa8 = 0x6a;
                              cVar8 = FUN_140041d90(&local_628,2);
                              if (cVar8 == '\0') {
                                cVar8 = FUN_140041d90(&local_628,1);
                                if (cVar8 == '\0') {
                                  uVar13 = FUN_140041c20(local_1a0,0);
                                  uVar23 = uVar23 | 0x40;
                                }
                                else {
                                  uVar13 = FUN_140041c20(local_7f8,1);
                                  uVar23 = uVar23 | 0x20;
                                }
                                local_res20 = uVar23;
                                uVar13 = FUN_1400424f0(local_1b0,uVar13);
                                uVar23 = uVar23 | 0x80;
                              }
                              else {
                                uVar13 = FUN_140041c20(local_8c8,2);
                                uVar23 = uVar23 | 0x10;
                              }
                              local_res20 = uVar23;
                              FUN_140041c60(&local_498,uVar13);
                              if ((char)uVar23 < '\0') {
                                uVar23 = uVar23 & 0xffffff7f;
                                local_res20 = uVar23;
                                FUN_140041b30(local_1b0);
                              }
                              if ((uVar23 & 0x40) != 0) {
                                uVar23 = uVar23 & 0xffffffbf;
                                local_res20 = uVar23;
                                FUN_140041b30(local_1a0);
                              }
                              if ((uVar23 & 0x20) != 0) {
                                uVar23 = uVar23 & 0xffffffdf;
                                local_res20 = uVar23;
                                FUN_140041b30(local_7f8);
                              }
                              if ((uVar23 & 0x10) != 0) {
                                uVar23 = uVar23 & 0xffffffef;
                                local_res20 = uVar23;
                                FUN_140041b30(local_8c8);
                              }
                              local_aa8 = 0x6c;
                              if ((1 << ((byte)local_abc & 0x1f) & 0x46U) != 0) {
                                FUN_140041a50(&local_ac8);
                              }
                              local_ac8 = 0;
                              local_ac0 = 0;
                              local_abc = 5;
                              uVar13 = FUN_140042490(local_res8,DAT_1419f9ce8);
                              uVar21 = FUN_140042490(local_res8,DAT_1419f9d48);
                              FUN_140e87440(&local_9b8,DAT_1419f9978,0x80000000,&local_768,
                                            uVar20 & 0xffffffffffffff00,uVar19 & 0xffffffffffffff00)
                              ;
                              uVar20 = local_res8;
                              uVar19 = local_res10;
                              FUN_140e87170(uVar21,DAT_141a0cfc8,0x80000000,&local_4a8,local_res8,
                                            local_res10);
                              FUN_140e87440(&local_9b8,DAT_1419f9ed8,0x80000000,&local_758,
                                            uVar20 & 0xffffffffffffff00,uVar19 & 0xffffffffffffff00)
                              ;
                              FUN_140041c60(local_948,&local_768);
                              local_a48 = local_948;
                              local_a40 = &local_6f8;
                              local_a38 = &local_708;
                              FUN_140041c60(local_918,&local_4a8);
                              local_a30 = local_918;
                              FUN_140041c60(local_908,&local_758);
                              local_a28 = local_908;
                              cVar8 = thunk_FUN_140e491e0(&local_488);
                              if (cVar8 == '\0') {
                                uVar21 = FUN_140041c20(local_958,4);
                                uVar23 = uVar23 | 0x200;
                              }
                              else {
                                uVar21 = FUN_140041c20(local_9f8,1);
                                uVar23 = uVar23 | 0x100;
                              }
                              local_res20 = uVar23;
                              FUN_140041c60(local_8f8,uVar21);
                              if ((uVar23 >> 9 & 1) != 0) {
                                uVar23 = uVar23 & 0xfffffdff;
                                local_res20 = uVar23;
                                FUN_140041b30(local_958);
                              }
                              if ((uVar23 >> 8 & 1) != 0) {
                                uVar23 = uVar23 & 0xfffffeff;
                                local_res20 = uVar23;
                                FUN_140041b30(local_9f8);
                              }
                              local_a20 = local_8f8;
                              local_a18 = &local_498;
                              FUN_140e63610(local_res8,local_res10,&local_ac8,7,uVar13,&local_a48);
                            }
                          }
                        }
                        local_aa8 = 0x6f;
                        uVar13 = FUN_140042490(local_res8,DAT_1419f5eb8);
                        uVar20 = local_res8;
                        uVar19 = local_res10;
                        FUN_140e87170(uVar13,DAT_1419fe0e8,0x80000000,&local_788,local_res8,
                                      local_res10);
                        cVar8 = FUN_140041d70(&local_978,&local_788);
                      } while (cVar8 == '\0');
                      uVar13 = FUN_140042490(local_res8,DAT_1419f5eb8);
                      uVar20 = local_res8;
                      uVar19 = local_res10;
                      FUN_140e87170(uVar13,DAT_1419fe158,0x80000000,&local_7a8,local_res8,
                                    local_res10);
                      cVar8 = FUN_140041d70(&local_968,&local_7a8);
                    } while (cVar8 == '\0');
                    local_aa8 = 0x71;
                    uVar13 = FUN_140042490(local_res8,DAT_1419f98c8);
                    uVar27 = (undefined4)(uVar20 >> 0x20);
                    uVar21 = FUN_140045f40(local_a60,0x10001a3,1);
                    dVar1 = (double)FUN_140041980(&local_708);
                    dVar2 = (double)FUN_140041980(&local_6f8);
                    dVar3 = (double)FUN_140041980(uVar13);
                    dVar4 = (double)FUN_140041980(uVar21);
                    uVar20 = CONCAT44(uVar27,(float)dVar1);
                    FUN_140ec5d30(local_res8,(int)dVar4,(float)dVar3,(float)dVar2,uVar20);
                    FUN_140041b30(local_a60);
                  } while( true );
                }
                local_aa8 = 0x77;
                FUN_140ec7870();
                uVar27 = (undefined4)(uVar20 >> 0x20);
                local_aa8 = 0x82;
                uVar13 = FUN_140042490(local_res8,DAT_1419f9eb8);
                cVar8 = FUN_140099510(uVar13,0x3fb999999999999a);
                if (cVar8 == '\0') {
                  local_aa8 = 0x89;
                  uVar13 = FUN_140042490(local_res8,DAT_1419f9eb8);
                  uVar21 = FUN_140053940(local_8c8,&local_9e8,0xe);
                  uVar13 = FUN_140053940(local_958,uVar13,1);
                  uVar20 = FUN_140041980(uVar13);
                  uVar13 = FUN_140042540(local_9f8,uVar20 ^ 0x8000000000000000);
                  uVar13 = FUN_1400467d0(local_a60,uVar13,uVar21);
                  FUN_140041c60(&local_878,uVar13);
                  FUN_140041b30(local_a60);
                  FUN_140041b30(local_9f8);
                  FUN_140041b30(local_958);
                  FUN_140041b30(local_8c8);
                  local_aa8 = 0x8a;
                  if ((1 << ((byte)local_abc & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_ac8);
                  }
                  local_ac8 = 0;
                  local_ac0 = 0;
                  local_abc = 5;
                  uVar13 = FUN_140042490(local_res8,DAT_1419f9d08);
                  uVar21 = FUN_140042490(local_res8,DAT_1419f9eb8);
                  FUN_140041c60(local_948,uVar13);
                  local_a48 = local_948;
                  uVar13 = FUN_140046230(local_a60,&local_5c8,&local_878);
                  FUN_140041c60(local_938,uVar13);
                  FUN_140041b30(local_a60);
                  local_a40 = local_938;
                  uVar13 = FUN_140046230(local_9f8,&local_548,&local_878);
                  FUN_140041c60(local_928,uVar13);
                  FUN_140041b30(local_9f8);
                  local_a38 = local_928;
                  FUN_140041c60(local_918,uVar21);
                  local_a30 = local_918;
                  FUN_140041c60(local_908,uVar21);
                  local_a28 = local_908;
                  FUN_1400441d0(local_8f8,&DAT_141dc75e0);
                  local_a20 = local_8f8;
                  FUN_1400441d0(local_8e8,&DAT_1419ed740);
                  local_a18 = local_8e8;
                  FUN_1400441d0(local_8d8,&DAT_1419ed6f0);
                  local_a10 = local_8d8;
                  uVar13 = CONCAT44(uVar27,DAT_141a04498);
                  FUN_140e634e0(local_res8,local_res10,&local_ac8,8,uVar13,&local_a48);
                  uVar27 = (undefined4)((ulonglong)uVar13 >> 0x20);
                }
                else {
                  local_aa8 = 0x84;
                  uVar13 = FUN_140042490(local_res8,DAT_1419f9eb8);
                  uVar21 = FUN_140053940(local_8c8,&local_9e8,10);
                  uVar13 = FUN_140053940(local_958,uVar13,1);
                  uVar20 = FUN_140041980(uVar13);
                  uVar13 = FUN_140042540(local_9f8,uVar20 ^ 0x8000000000000000);
                  uVar13 = FUN_1400467d0(local_a60,uVar13,uVar21);
                  FUN_140041c60(&local_878,uVar13);
                  FUN_140041b30(local_a60);
                  FUN_140041b30(local_9f8);
                  FUN_140041b30(local_958);
                  FUN_140041b30(local_8c8);
                  local_aa8 = 0x85;
                  uVar13 = FUN_140046230(local_7f8,&local_548,&local_878);
                  uVar21 = FUN_140046230(local_9f8,&local_5c8,&local_878);
                  uVar22 = FUN_140045f40(local_a60,0x10001a9,1);
                  dVar1 = (double)FUN_140041980(uVar13);
                  dVar2 = (double)FUN_140041980(uVar21);
                  dVar3 = (double)FUN_140041980(uVar22);
                  uVar13 = CONCAT44(uVar27,(float)dVar1);
                  FUN_140ec5d30(local_res8,(int)dVar3,0,(float)dVar2,uVar13);
                  uVar27 = (undefined4)((ulonglong)uVar13 >> 0x20);
                  FUN_140041b30(local_a60);
                  FUN_140041b30(local_9f8);
                  FUN_140041b30(local_7f8);
                }
                local_aa8 = 0x8d;
                FUN_140041cb0(&local_818,0x3fe8000000000000);
                local_aa8 = 0x8e;
                if ((1 << ((byte)local_abc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_ac8);
                }
                local_ac8 = 0;
                local_ac0 = 0;
                local_abc = 5;
                uVar13 = FUN_140045f40(local_a60,0x100011c,1);
                FUN_140041c60(local_948,uVar13);
                FUN_140041b30(local_a60);
                local_a48 = local_948;
                uVar21 = CONCAT44(uVar27,DAT_141a047c8);
                uVar13 = FUN_140e634e0(local_res8,local_res10,&local_ac8,1,uVar21,&local_a48);
                uVar27 = (undefined4)((ulonglong)uVar21 >> 0x20);
                uVar13 = FUN_1400467d0(local_a60,uVar13,&local_818);
                FUN_140041c60(&local_4b8,uVar13);
                FUN_140041b30(local_a60);
                local_aa8 = 0x8f;
                if ((1 << ((byte)local_abc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_ac8);
                }
                local_ac8 = 0;
                local_ac0 = 0;
                local_abc = 5;
                uVar13 = FUN_140045f40(local_a60,0x100011c,1);
                FUN_140041c60(local_948,uVar13);
                FUN_140041b30(local_a60);
                local_a48 = local_948;
                uVar20 = CONCAT44(uVar27,DAT_141a04808);
                ppuVar28 = &local_a48;
                uVar13 = FUN_140e634e0(local_res8,local_res10,&local_ac8,1,uVar20,&local_a48);
                uVar13 = FUN_1400467d0(local_a60,uVar13,&local_818);
                FUN_140041c60(&local_4c8,uVar13);
                FUN_140041b30(local_a60);
                local_aa8 = 0x90;
                FUN_140041c60(&local_638,&local_4b8);
                local_aa8 = 0x91;
                uVar13 = FUN_1400b46b0(local_9f8,&local_4c8,0x3fe0000000000000);
                FUN_140041c60(&local_648,uVar13);
                FUN_140041b30(local_9f8);
                local_aa8 = 0x92;
                FUN_140044220(&local_658,4);
                local_aa8 = 0x93;
                FUN_140044220(&local_828,0xb0);
                local_aa8 = 0x94;
                FUN_140044220(&local_838,0x87);
                local_aa8 = 0x95;
                uVar13 = FUN_140046450(local_958,&local_828,&local_658);
                FUN_140041c60(&local_4d8,uVar13);
                FUN_140041b30(local_958);
                local_aa8 = 0x96;
                uVar13 = FUN_140046450(local_8c8,&local_838,&local_658);
                FUN_140041c60(&local_4e8,uVar13);
                FUN_140041b30(local_8c8);
                local_aa8 = 0x98;
                uVar13 = FUN_140045f40(local_7f8,0x9d,1);
                iVar10 = FUN_140e63cb0(local_110,&local_res8,&local_res10,uVar13);
                FUN_140041b30(local_7f8);
                if (0 < iVar10) {
                  uVar23 = local_res20;
                  do {
                    local_aa8 = 0x9a;
                    uVar13 = FUN_140042490(local_res8,DAT_141a56cd0);
                    cVar8 = FUN_140046b60(uVar13,2);
                    if (cVar8 == '\0') {
                      local_aa8 = 0x9b;
                      FUN_1400ec6d0(&local_aa0,local_res8);
                      ppuVar28 = (undefined8 **)((ulonglong)ppuVar28 & 0xffffffffffffff00);
                      uVar20 = uVar20 & 0xffffffffffffff00;
                      FUN_140e87440(&local_aa0,DAT_141a1f580,0x80000000,&local_6d8,uVar20,ppuVar28);
                      FUN_140041b30(&local_aa0);
                      uVar13 = FUN_140045f40(local_a60,0xcb,1);
                      cVar8 = FUN_140041d70(&local_6d8,uVar13);
                      FUN_140041b30(local_a60);
                      if (cVar8 == '\0') {
                        FUN_1400ec6d0(local_a08,local_res8);
                        ppuVar28 = (undefined8 **)((ulonglong)ppuVar28 & 0xffffffffffffff00);
                        uVar20 = uVar20 & 0xffffffffffffff00;
                        FUN_140e87440(local_a08,DAT_141a1f580,0x80000000,&local_6d8,uVar20,ppuVar28)
                        ;
                        FUN_140041b30(local_a08);
                        uVar13 = FUN_140045f40(local_9f8,0x56,1);
                        cVar8 = FUN_140041d70(&local_6d8,uVar13);
                        FUN_140041b30(local_9f8);
                        if (cVar8 == '\0') {
                          local_aa8 = 0x9c;
                          if ((1 << ((byte)local_abc & 0x1f) & 0x46U) != 0) {
                            FUN_140041a50(&local_ac8);
                          }
                          local_ac8 = 0;
                          local_ac0 = 0;
                          local_abc = 5;
                          FUN_1400ec6d0(local_9c8,local_res8);
                          uVar20 = uVar20 & 0xffffffffffffff00;
                          FUN_140e87440(local_9c8,DAT_141a0a828,0x80000000,&local_4f8,uVar20,
                                        (ulonglong)ppuVar28 & 0xffffffffffffff00);
                          uVar27 = (undefined4)(uVar20 >> 0x20);
                          FUN_140041b30(local_9c8);
                          FUN_140041c60(local_948,&local_4f8);
                          local_a48 = local_948;
                          FUN_140041c60(local_938,&DAT_141ddb268);
                          local_a40 = local_938;
                          uVar20 = CONCAT44(uVar27,DAT_141a56cf0);
                          ppuVar28 = &local_a48;
                          uVar13 = FUN_140e634e0(local_res8,local_res10,&local_ac8,2,uVar20,
                                                 &local_a48);
                          cVar8 = FUN_140e491e0(uVar13);
                          if (cVar8 != '\0') {
                            uVar13 = FUN_140042490(local_res8,DAT_141a1f090);
                            cVar8 = FUN_140046c90(uVar13,0);
                            if (cVar8 == '\0') {
                              local_aa8 = 0x9e;
                              if ((1 << ((byte)local_abc & 0x1f) & 0x46U) != 0) {
                                FUN_140041a50(&local_ac8);
                              }
                              local_ac8 = 0;
                              local_ac0 = 0;
                              local_abc = 5;
                              FUN_1400ec6d0(local_9d8,local_res8);
                              uVar20 = uVar20 & 0xffffffffffffff00;
                              FUN_140e87440(local_9d8,DAT_1419fe0e8,0x80000000,&local_508,uVar20,
                                            (ulonglong)ppuVar28 & 0xffffffffffffff00);
                              uVar27 = (undefined4)(uVar20 >> 0x20);
                              FUN_140041b30(local_9d8);
                              FUN_140e85f80(local_res8,DAT_141a00d08,0,&local_9a8);
                              FUN_140041c60(local_948,&local_9a8);
                              local_a48 = local_948;
                              uVar20 = CONCAT44(uVar27,DAT_141a00e38);
                              ppuVar28 = &local_a48;
                              uVar13 = FUN_140e634e0(local_res8,local_res10,&local_ac8,1,uVar20,
                                                     &local_a48);
                              uVar13 = FUN_140046450(local_958,&local_508,uVar13);
                              FUN_140041c60(&local_848,uVar13);
                              FUN_140041b30(local_958);
                              local_aa8 = 0x9f;
                              if ((1 << ((byte)local_abc & 0x1f) & 0x46U) != 0) {
                                FUN_140041a50(&local_ac8);
                              }
                              local_ac8 = 0;
                              local_ac0 = 0;
                              local_abc = 5;
                              FUN_1400ec6d0(local_6c8,local_res8);
                              uVar20 = uVar20 & 0xffffffffffffff00;
                              FUN_140e87440(local_6c8,DAT_1419fe158,0x80000000,&local_518,uVar20,
                                            (ulonglong)ppuVar28 & 0xffffffffffffff00);
                              uVar27 = (undefined4)(uVar20 >> 0x20);
                              FUN_140041b30(local_6c8);
                              FUN_140e85f80(local_res8,DAT_141a00d08,0,&local_9a8);
                              FUN_140041c60(local_948,&local_9a8);
                              local_a48 = local_948;
                              uVar20 = CONCAT44(uVar27,DAT_141a00dd8);
                              ppuVar28 = &local_a48;
                              uVar13 = FUN_140e634e0(local_res8,local_res10,&local_ac8,1,uVar20,
                                                     &local_a48);
                              uVar13 = FUN_140046450(local_8c8,&local_518,uVar13);
                              FUN_140041c60(&local_7e8,uVar13);
                              FUN_140041b30(local_8c8);
                              local_aa8 = 0xa1;
                              cVar8 = FUN_140046dd0(&local_848,0);
                              if (cVar8 != '\0') {
                                cVar8 = FUN_140046c90(&local_848,0x160);
                                if (cVar8 != '\0') {
                                  cVar8 = FUN_140046dd0(&local_7e8,0);
                                  if (cVar8 != '\0') {
                                    cVar8 = FUN_140046c90(&local_7e8,0x10e);
                                    if (cVar8 != '\0') {
                                      local_aa8 = 0xa1;
                                      goto LAB_140d38439;
                                    }
                                  }
                                }
                              }
                              local_aa8 = 0xa3;
                              uVar13 = FUN_140046450(local_7f8,&local_848,&local_828);
                              FUN_140041c60(&local_898,uVar13);
                              FUN_140041b30(local_7f8);
                              local_aa8 = 0xa4;
                              uVar13 = FUN_140046450(local_1a0,&local_7e8,&local_838);
                              FUN_140041c60(&local_8a8,uVar13);
                              FUN_140041b30(local_1a0);
                              local_aa8 = 0xa5;
                              cVar8 = FUN_140041d90(&local_898,0);
                              uVar27 = (undefined4)((ulonglong)uVar18 >> 0x20);
                              uVar24 = (undefined4)(uVar17 >> 0x20);
                              uVar30 = (undefined4)((ulonglong)uVar15 >> 0x20);
                              uVar12 = (undefined4)((ulonglong)uVar14 >> 0x20);
                              if (cVar8 != '\0') {
                                cVar8 = FUN_140041d90(&local_8a8,0);
                                uVar27 = (undefined4)((ulonglong)uVar18 >> 0x20);
                                uVar24 = (undefined4)(uVar17 >> 0x20);
                                uVar30 = (undefined4)((ulonglong)uVar15 >> 0x20);
                                uVar12 = (undefined4)((ulonglong)uVar14 >> 0x20);
                                if (cVar8 != '\0') {
                                  local_aa8 = 0xa5;
                                  goto LAB_140d38439;
                                }
                              }
                              uVar11 = (undefined4)(uVar20 >> 0x20);
                              uVar29 = (undefined4)((ulonglong)ppuVar28 >> 0x20);
                              local_aa8 = 0xa7;
                              cVar8 = FUN_140081f30(&local_898,0);
                              if (cVar8 == '\0') {
                                uVar13 = FUN_140041c20(local_1b0,99999);
                                uVar23 = uVar23 | 0x1000;
                              }
                              else {
                                uVar13 = FUN_140046760(local_1d0,&local_4d8,&local_898);
                                local_res20 = uVar23 | 0x400;
                                FUN_140041980(uVar13);
                                uVar13 = FUN_140e78d00();
                                uVar13 = FUN_140042540(local_1c0,uVar13);
                                uVar23 = uVar23 | 0xc00;
                              }
                              local_res20 = uVar23;
                              FUN_140041c60(&local_528,uVar13);
                              if ((uVar23 >> 0xc & 1) != 0) {
                                uVar23 = uVar23 & 0xffffefff;
                                local_res20 = uVar23;
                                FUN_140041b30(local_1b0);
                              }
                              if ((uVar23 >> 0xb & 1) != 0) {
                                uVar23 = uVar23 & 0xfffff7ff;
                                local_res20 = uVar23;
                                FUN_140041b30(local_1c0);
                              }
                              if ((uVar23 >> 10 & 1) != 0) {
                                uVar23 = uVar23 & 0xfffffbff;
                                local_res20 = uVar23;
                                FUN_140041b30(local_1d0);
                              }
                              local_aa8 = 0xa8;
                              cVar8 = FUN_140081f30(&local_8a8,0);
                              if (cVar8 == '\0') {
                                uVar13 = FUN_140041c20(local_1e0,99999);
                                uVar23 = uVar23 | 0x8000;
                              }
                              else {
                                uVar13 = FUN_140046760(local_200,&local_4e8,&local_8a8);
                                local_res20 = uVar23 | 0x2000;
                                FUN_140041980(uVar13);
                                uVar13 = FUN_140e78d00();
                                uVar13 = FUN_140042540(local_1f0,uVar13);
                                uVar23 = uVar23 | 0x6000;
                              }
                              local_res20 = uVar23;
                              FUN_140041c60(&local_538,uVar13);
                              if ((uVar23 >> 0xf & 1) != 0) {
                                uVar23 = uVar23 & 0xffff7fff;
                                local_res20 = uVar23;
                                FUN_140041b30(local_1e0);
                              }
                              if ((uVar23 >> 0xe & 1) != 0) {
                                uVar23 = uVar23 & 0xffffbfff;
                                local_res20 = uVar23;
                                FUN_140041b30(local_1f0);
                              }
                              if ((uVar23 >> 0xd & 1) != 0) {
                                uVar23 = uVar23 & 0xffffdfff;
                                local_res20 = uVar23;
                                FUN_140041b30(local_200);
                              }
                              local_aa8 = 0xa9;
                              if ((1 << ((byte)local_abc & 0x1f) & 0x46U) != 0) {
                                FUN_140041a50(&local_ac8);
                              }
                              local_ac8 = 0;
                              local_ac0 = 0;
                              local_abc = 5;
                              local_a48 = &local_528;
                              local_a40 = &local_538;
                              uVar13 = FUN_140e79230(&local_ac8,2,&local_a48);
                              FUN_140041c60(&local_5d8,uVar13);
                              local_aa8 = 0xab;
                              uVar13 = FUN_1400467d0(local_120,&local_898,&local_5d8);
                              uVar13 = FUN_140046230(local_210,&local_828,uVar13);
                              FUN_140041c60(&local_398,uVar13);
                              FUN_140041b30(local_210);
                              FUN_140041b30(local_120);
                              local_aa8 = 0xac;
                              uVar13 = FUN_1400467d0(local_240,&local_8a8,&local_5d8);
                              uVar13 = FUN_140046230(local_230,&local_838,uVar13);
                              FUN_140041c60(&local_3a8,uVar13);
                              FUN_140041b30(local_230);
                              FUN_140041b30(local_240);
                              local_aa8 = 0xae;
                              dVar1 = (double)FUN_140041980(&local_7e8);
                              dVar2 = (double)FUN_140041980(&local_848);
                              dVar3 = (double)FUN_140041980(&local_838);
                              dVar4 = (double)FUN_140041980(&local_828);
                              uVar13 = FUN_140e793d0((float)dVar4,(float)dVar3,(float)dVar2,
                                                     (float)dVar1);
                              FUN_140045f90(&local_678,uVar13);
                              local_aa8 = 0xb3;
                              FUN_140041980(&local_678);
                              uVar13 = FUN_140e78ee0();
                              FUN_140041cb0(&local_7d8,uVar13);
                              local_aa8 = 0xb4;
                              FUN_140041980(&local_7d8);
                              uVar13 = thunk_FUN_1412ac390();
                              uVar13 = FUN_1400b46b0(local_558,&local_648,uVar13);
                              FUN_140041980(&local_7d8);
                              uVar14 = thunk_FUN_1412aae80();
                              uVar14 = FUN_1400b46b0(local_568,&local_638,uVar14);
                              uVar13 = FUN_140046230(local_598,uVar14,uVar13);
                              uVar13 = FUN_140046450(local_578,&local_398,uVar13);
                              FUN_140041c60(&local_3b8,uVar13);
                              FUN_140041b30(local_578);
                              FUN_140041b30(local_598);
                              FUN_140041b30(local_568);
                              FUN_140041b30(local_558);
                              local_aa8 = 0xb5;
                              FUN_140041980(&local_7d8);
                              uVar13 = thunk_FUN_1412aae80();
                              uVar13 = FUN_1400b46b0(local_5a8,&local_648,uVar13);
                              uVar20 = FUN_140041980(&local_638);
                              uVar14 = FUN_140042540(local_588,uVar20 ^ 0x8000000000000000);
                              FUN_140041980(&local_7d8);
                              uVar15 = thunk_FUN_1412ac390();
                              uVar14 = FUN_1400b46b0(local_6b8,uVar14,uVar15);
                              uVar13 = FUN_140046230(local_6a8,uVar14,uVar13);
                              uVar13 = FUN_140046450(local_698,&local_3a8,uVar13);
                              FUN_140041c60(&local_3c8,uVar13);
                              FUN_140041b30(local_698);
                              FUN_140041b30(local_6a8);
                              FUN_140041b30(local_6b8);
                              FUN_140041b30(local_588);
                              FUN_140041b30(local_5a8);
                              local_aa8 = 0xb7;
                              uVar13 = FUN_140053820(local_f0,&local_3c8,0);
                              uVar14 = FUN_140053820(local_668,&local_3b8,0x40);
                              uVar15 = FUN_140045f40(local_688,0x100011c,1);
                              dVar1 = (double)FUN_140041980(&local_678);
                              dVar2 = (double)FUN_140041980(&local_818);
                              dVar3 = (double)FUN_140041980(&local_818);
                              dVar4 = (double)FUN_140041980(uVar13);
                              dVar5 = (double)FUN_140041980(uVar14);
                              dVar6 = (double)FUN_140041980(uVar15);
                              uVar14 = CONCAT44(uVar12,0x3f800000);
                              uVar15 = CONCAT44(uVar30,0xffffff);
                              uVar17 = CONCAT44(uVar24,(float)dVar1);
                              uVar18 = CONCAT44(uVar27,(float)dVar2);
                              ppuVar28 = (undefined8 **)CONCAT44(uVar29,(float)dVar3);
                              uVar20 = CONCAT44(uVar11,(float)dVar4);
                              FUN_140ec5dd0(local_res8,(int)dVar6,0,(float)dVar5,uVar20,ppuVar28,
                                            uVar18,uVar17,uVar15,uVar14);
                              FUN_140041b30(local_688);
                              FUN_140041b30(local_668);
                              FUN_140041b30(local_f0);
                              goto LAB_140d38439;
                            }
                          }
                          local_aa8 = 0x9c;
                          goto LAB_140d38439;
                        }
                      }
                      local_aa8 = 0x9b;
                    }
                    else {
                      local_aa8 = 0x9a;
                    }
LAB_140d38439:
                    cVar8 = FUN_140e643f0(local_110,&local_res8,&local_res10);
                  } while (cVar8 != '\0');
                }
                FUN_140e63970(local_110,&local_res8,&local_res10);
                local_aa8 = 0xba;
                if ((1 << ((byte)local_abc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_ac8);
                }
                local_ac8 = 0;
                local_ac0 = 0;
                local_abc = 5;
                uVar13 = FUN_140042490(local_res8,DAT_1419f9ea8);
                FUN_140e87440(uVar13,DAT_141a570f0,0x80000000,&local_3d8,uVar20 & 0xffffffffffffff00
                              ,(ulonglong)ppuVar28 & 0xffffffffffffff00);
                uVar13 = FUN_140069500(uVar13);
                uVar19 = 0;
                puVar26 = &local_3d8;
                FUN_140e63610(uVar13,local_res10,&local_ac8,0,puVar26,0);
                local_aa8 = 0xbc;
                uVar19 = uVar19 & 0xffffffffffffff00;
                uVar20 = (ulonglong)puVar26 & 0xffffffffffffff00;
                FUN_140e87440(local_338,DAT_1419ef748,0x80000000,&local_3e8,uVar20,uVar19);
                cVar8 = FUN_140e491e0(&local_3e8);
                if (cVar8 != '\0') {
                  local_aa8 = 0xbd;
                  if ((1 << ((byte)local_abc & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_ac8);
                  }
                  local_ac8 = 0;
                  local_ac0 = 0;
                  local_abc = 5;
                  uVar13 = FUN_140042490(local_res8,DAT_1419f9ea8);
                  FUN_140e87440(uVar13,DAT_141a05028,0x80000000,&local_3f8,
                                uVar20 & 0xffffffffffffff00,uVar19 & 0xffffffffffffff00);
                  FUN_1400441d0(local_948,&DAT_1419ed720);
                  local_a48 = local_948;
                  FUN_1400441d0(local_938,&DAT_1419ed730);
                  local_a40 = local_938;
                  uVar13 = FUN_140069500(uVar13);
                  FUN_140e63610(uVar13,local_res10,&local_ac8,2,&local_3f8,&local_a48);
                }
                FUN_140045ef0(local_110);
              }
              else {
                local_aa8 = 0xb;
              }
            }
            else {
              local_aa8 = 6;
            }
            goto LAB_140d38640;
          }
        }
        local_aa8 = 5;
      }
      else {
        local_aa8 = 4;
      }
    }
  }
LAB_140d38640:
  FUN_140041b30(&local_888);
  FUN_140041b30(&local_a70);
  FUN_140041b30(&local_ac8);
  FUN_140041b30(&local_190);
  FUN_140041b30(&local_180);
  FUN_140041b30(&local_170);
  FUN_140041b30(&local_160);
  FUN_140041b30(&local_150);
  FUN_140041b30(&local_140);
  FUN_140041b30(&local_130);
  FUN_140041b30(&local_388);
  FUN_140041b30(&local_378);
  FUN_140041b30(&local_368);
  FUN_140041b30(&local_358);
  FUN_140041b30(&local_348);
  FUN_140041b30(&local_220);
  FUN_140041b30(&local_330);
  FUN_140041b30(&local_320);
  FUN_140041b30(&local_310);
  FUN_140041b30(&local_300);
  FUN_140041b30(&local_2f0);
  FUN_140041b30(&local_2e0);
  FUN_140041b30(&local_2d0);
  FUN_140041b30(&local_2c0);
  FUN_140041b30(&local_2b0);
  FUN_140041b30(&local_2a0);
  FUN_140041b30(&local_290);
  FUN_140041b30(&local_a80);
  FUN_140041b30(&local_a90);
  FUN_140041b30(&local_3f8);
  FUN_140041b30(&local_3e8);
  FUN_140041b30(&local_3d8);
  FUN_140041b30(&local_3c8);
  FUN_140041b30(&local_3b8);
  FUN_140041b30(&local_7d8);
  FUN_140041b30(&local_678);
  FUN_140041b30(&local_3a8);
  FUN_140041b30(&local_398);
  FUN_140041b30(&local_5d8);
  FUN_140041b30(&local_538);
  FUN_140041b30(&local_528);
  FUN_140041b30(&local_7e8);
  FUN_140041b30(&local_518);
  FUN_140041b30(&local_848);
  FUN_140041b30(&local_508);
  FUN_140041b30(&local_4f8);
  FUN_140041b30(&local_6d8);
  FUN_140041b30(&local_4e8);
  FUN_140041b30(&local_4d8);
  FUN_140041b30(&local_838);
  FUN_140041b30(&local_828);
  FUN_140041b30(&local_658);
  FUN_140041b30(&local_648);
  FUN_140041b30(&local_638);
  FUN_140041b30(&local_4c8);
  FUN_140041b30(&local_4b8);
  FUN_140041b30(&local_818);
  FUN_140041b30(&local_878);
  FUN_140041b30(&local_4a8);
  FUN_140041b30(&local_498);
  FUN_140041b30(&local_628);
  FUN_140041b30(&local_488);
  FUN_140041b30(&local_618);
  FUN_140041b30(&local_768);
  FUN_140041b30(&local_758);
  FUN_140041b30(&local_608);
  FUN_140041b30(&local_478);
  FUN_140041b30(&local_748);
  FUN_140041b30(&local_738);
  FUN_140041b30(&local_280);
  FUN_140041b30(&local_728);
  FUN_140041b30(&local_8b8);
  FUN_140041b30(&local_270);
  FUN_140041b30(&local_468);
  FUN_140041b30(&local_9b8);
  FUN_140041b30(&local_718);
  FUN_140041b30(&local_708);
  FUN_140041b30(&local_6f8);
  FUN_140041b30(&local_8a8);
  FUN_140041b30(&local_898);
  FUN_140041b30(&local_868);
  FUN_140041b30(&local_858);
  FUN_140041b30(&local_978);
  FUN_140041b30(&local_968);
  FUN_140041b30(&local_5f8);
  FUN_140041b30(&local_458);
  FUN_140041b30(&local_448);
  FUN_140041b30(&local_438);
  FUN_140041b30(&local_6e8);
  FUN_140041b30(&local_998);
  FUN_140041b30(&local_808);
  FUN_140041b30(&local_428);
  FUN_140041b30(&local_418);
  FUN_140041b30(&local_7b8);
  FUN_140041b30(&local_7a8);
  FUN_140041b30(&local_798);
  FUN_140041b30(&local_788);
  FUN_140041b30(&local_5e8);
  FUN_140041b30(&local_260);
  FUN_140041b30(&local_250);
  FUN_140041b30(&local_9a8);
  FUN_140041b30(&local_548);
  FUN_140041b30(&local_5c8);
  FUN_140041b30(&local_778);
  FUN_140041b30(&local_7c8);
  FUN_140041b30(&local_9e8);
  FUN_140041b30(&local_5b8);
  FUN_140041b30(&local_988);
  FUN_140041b30(&local_408);
  _eh_vector_destructor_iterator_(local_948,0x10,8,FUN_140041b30);
  FUN_140041970(&local_ab8);
  return;
}

