// gml_Script_StatesPestAttack3 @ 0x140592c10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_StatesPestAttack3
          (longlong *param_1,longlong *param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong **pplVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  longlong *local_res8;
  longlong *local_res10;
  undefined8 *local_res18;
  uint local_res20;
  code *pcVar14;
  undefined8 **ppuVar15;
  undefined4 uVar19;
  ulonglong uVar16;
  undefined8 uVar17;
  longlong *plVar18;
  ulonglong uVar20;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined8 local_2c8;
  undefined4 uStack_2c0;
  uint uStack_2bc;
  undefined8 local_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  longlong *local_298;
  undefined4 uStack_290;
  uint uStack_28c;
  undefined8 local_288;
  byte local_27c;
  undefined1 local_278 [12];
  byte local_26c;
  undefined8 local_268;
  byte local_25c;
  undefined1 local_258 [12];
  byte local_24c;
  undefined1 local_248 [12];
  byte local_23c;
  undefined1 local_238 [12];
  byte local_22c;
  undefined8 local_228;
  byte local_21c;
  undefined1 local_218 [12];
  byte local_20c;
  undefined8 local_208;
  byte local_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  char *local_1e0;
  undefined4 local_1d8;
  undefined8 *local_1c8;
  undefined1 *local_1c0;
  undefined8 *local_1b8;
  undefined1 *local_1b0;
  undefined1 *local_1a8;
  undefined1 *local_1a0;
  undefined8 *local_198;
  undefined1 *local_190;
  undefined8 *local_188;
  longlong *local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  longlong *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  longlong *local_128;
  undefined4 local_120;
  uint local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 *local_a8;
  undefined1 local_a0 [16];
  longlong local_90;
  
  uVar12 = 0;
  local_res20 = 0;
  local_1e0 = "gml_Script_StatesPestAttack4";
  local_1e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1e8;
  local_1d8 = 0x444;
  pcVar14 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  _eh_vector_constructor_iterator_(&local_288,0x10,9,FUN_1400424d0,FUN_140041b30);
  local_dc = 0xffffff;
  local_e8 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  uStack_15c = 0xffffff;
  local_168 = (longlong *)0x0;
  uStack_ec = 0xffffff;
  local_f8 = (longlong *)0x0;
  local_16c = 0xffffff;
  local_178 = (longlong *)0x0;
  local_fc = 0xffffff;
  local_108 = 0;
  uStack_ac = 0xffffff;
  local_b8 = (longlong *)0x0;
  local_11c = 0xffffff;
  local_128 = (longlong *)0x0;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  puVar4 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_12c = 0xffffff;
  local_138 = 0;
  local_2cc = 0;
  local_2d8 = 0;
  local_1ec = 0;
  local_1f8 = 0;
  local_13c = 0;
  local_148 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1d8 = 0x446;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  local_cc = *(undefined4 *)((longlong)param_5 + 0xc);
  local_d0 = *(undefined4 *)(param_5 + 1);
  local_a8 = puVar4;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) == 0) {
    local_d8 = *param_5;
  }
  else {
    FUN_1400419b0(&local_d8);
  }
  uVar3 = 2;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de0610) &&
     (_Init_thread_header(&DAT_141de0610), DAT_141de0610 == -1)) {
    _DAT_141de035c = 0;
    _DAT_141de0350 = 0x4000000000000000;
    _DAT_141de0370 = 0;
    _DAT_141de0364 = 0;
    _DAT_141de0374 = 1;
    _DAT_141de0384 = 0;
    _DAT_141de0378 = 0x3ff0000000000000;
    _DAT_141de0388 = 2;
    _DAT_141de0398 = 0;
    _DAT_141de038c = 0x4008000000000000;
    _DAT_141de039c = 3;
    atexit((_func_5014 *)&LAB_141482ab0);
    _Init_thread_footer(&DAT_141de0610);
  }
  uVar11 = 0;
  do {
    iVar2 = FUN_140e851f0(&DAT_141de0350 + (longlong)(int)uVar11 * 0x14,&local_d8,DAT_141955260,0);
    uVar19 = (undefined4)((ulonglong)pcVar14 >> 0x20);
    if (iVar2 == 0) {
      iVar2 = *(int *)(&DAT_141de0360 + (longlong)(int)uVar11 * 0x14);
      if (iVar2 == 0) {
        local_1d8 = 0x44a;
        uStack_2bc = 0xf;
        local_2c8 = (longlong *)0x100000100000377;
        local_2a8 = 0x377;
        uStack_2a4 = 0x1000001;
        uStack_2a0 = uStack_2c0;
        uStack_29c = 0xf;
        if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_e8);
        }
        FUN_140041b80(&local_e8,&local_2a8);
        FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_e8);
        local_1d8 = 1099;
        if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        local_10c = 0;
        local_118 = 0;
        FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_118);
        local_1d8 = 0x44d;
        if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2d8);
        }
        local_2d8 = 0;
        local_2d0 = 0;
        local_2cc = 5;
        puVar4 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
        if (puVar4 != &local_288) {
          local_2a8 = *(undefined4 *)puVar4;
          uStack_2a4 = *(undefined4 *)((longlong)puVar4 + 4);
          uStack_2a0 = *(undefined4 *)(puVar4 + 1);
          uStack_29c = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_288);
          }
          FUN_140041b80(&local_288,&local_2a8);
        }
        local_1c8 = &local_288;
        local_2a8 = _DAT_141dd4108;
        uStack_2a4 = uRam0000000141dd410c;
        uStack_2a0 = uRam0000000141dd4110;
        uStack_29c = DAT_141dd4114;
        if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_278);
        }
        FUN_140041b80(local_278,&local_2a8);
        local_1c0 = local_278;
        local_2a8 = _DAT_1419e6610;
        uStack_2a4 = uRam00000001419e6614;
        uStack_2a0 = uRam00000001419e6618;
        uStack_29c = uRam00000001419e661c;
        if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_268);
        }
        FUN_140041b80(&local_268,&local_2a8);
        local_1b8 = &local_268;
        uVar5 = CONCAT44(uVar19,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_2d8,3,uVar5,&local_1c8);
        uVar19 = (undefined4)((ulonglong)uVar5 >> 0x20);
        local_1d8 = 0x44f;
        if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2d8);
        }
        local_2d8 = 0;
        local_2d0 = 0;
        local_2cc = 5;
        if (puVar4 != &local_288) {
          local_2a8 = *(undefined4 *)puVar4;
          uStack_2a4 = *(undefined4 *)((longlong)puVar4 + 4);
          uStack_2a0 = *(undefined4 *)(puVar4 + 1);
          uStack_29c = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_288);
          }
          FUN_140041b80(&local_288,&local_2a8);
        }
        local_1c8 = &local_288;
        local_2a8 = _DAT_141dd40f8;
        uStack_2a4 = uRam0000000141dd40fc;
        uStack_2a0 = uRam0000000141dd4100;
        uStack_29c = DAT_141dd4104;
        if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_278);
        }
        FUN_140041b80(local_278,&local_2a8);
        local_1c0 = local_278;
        local_2a8 = _DAT_1419e6660;
        uStack_2a4 = uRam00000001419e6664;
        uStack_2a0 = uRam00000001419e6668;
        uStack_29c = uRam00000001419e666c;
        if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_268);
        }
        FUN_140041b80(&local_268,&local_2a8);
        local_1b8 = &local_268;
        FUN_140e634e0(local_res8,local_res10,&local_2d8,3,CONCAT44(uVar19,DAT_1419ff3d8),&local_1c8)
        ;
        local_1d8 = 0x450;
        if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2d8);
        }
        local_2d8 = 0;
        local_2d0 = 0;
        local_2cc = 5;
        puVar4 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
        uStack_2bc = 0xf;
        local_2c8 = (longlong *)0x1000000000000ee;
        plVar18 = local_res8;
        FUN_140e87170(&local_2c8,DAT_1419fe0e8,0x80000000,&local_168,local_res8,local_res10);
        uVar19 = (undefined4)((ulonglong)plVar18 >> 0x20);
        if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2c8);
        }
        if (puVar4 != &local_288) {
          local_2a8 = *(undefined4 *)puVar4;
          uStack_2a4 = *(undefined4 *)((longlong)puVar4 + 4);
          uStack_2a0 = *(undefined4 *)(puVar4 + 1);
          uStack_29c = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_288);
          }
          FUN_140041b80(&local_288,&local_2a8);
        }
        local_1c8 = &local_288;
        local_2a8 = _DAT_141dd41e8;
        uStack_2a4 = uRam0000000141dd41ec;
        uStack_2a0 = uRam0000000141dd41f0;
        uStack_29c = DAT_141dd41f4;
        if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_278);
        }
        FUN_140041b80(local_278,&local_2a8);
        local_1c0 = local_278;
        local_2a8 = (undefined4)local_168;
        uStack_2a4 = local_168._4_4_;
        uStack_2a0 = uStack_160;
        uStack_29c = uStack_15c;
        if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_268);
        }
        FUN_140041b80(&local_268,&local_2a8);
        local_1b8 = &local_268;
        FUN_140e634e0(local_res8,local_res10,&local_2d8,3,CONCAT44(uVar19,DAT_1419ff3d8),&local_1c8)
        ;
        local_1d8 = 0x451;
        if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2d8);
        }
        local_2d8 = 0;
        local_2d0 = 0;
        local_2cc = 5;
        puVar4 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
        uStack_2bc = 0xf;
        local_2c8 = (longlong *)0x1000000000000ee;
        plVar18 = local_res8;
        FUN_140e87170(&local_2c8,DAT_1419fe158,0x80000000,&local_f8,local_res8,local_res10);
        uVar19 = (undefined4)((ulonglong)plVar18 >> 0x20);
        if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2c8);
        }
        if (puVar4 != &local_288) {
          local_2a8 = *(undefined4 *)puVar4;
          uStack_2a4 = *(undefined4 *)((longlong)puVar4 + 4);
          uStack_2a0 = *(undefined4 *)(puVar4 + 1);
          uStack_29c = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_288);
          }
          FUN_140041b80(&local_288,&local_2a8);
        }
        local_1c8 = &local_288;
        local_2a8 = _DAT_141dd4258;
        uStack_2a4 = uRam0000000141dd425c;
        uStack_2a0 = uRam0000000141dd4260;
        uStack_29c = DAT_141dd4264;
        if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_278);
        }
        FUN_140041b80(local_278,&local_2a8);
        local_1c0 = local_278;
        local_2a8 = (undefined4)local_f8;
        uStack_2a4 = local_f8._4_4_;
        uStack_2a0 = uStack_f0;
        uStack_29c = uStack_ec;
        if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_268);
        }
        FUN_140041b80(&local_268,&local_2a8);
        local_1b8 = &local_268;
        uVar5 = CONCAT44(uVar19,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_2d8,3,uVar5,&local_1c8);
        uVar19 = (undefined4)((ulonglong)uVar5 >> 0x20);
        local_1d8 = 0x452;
        if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2d8);
        }
        local_2d8 = 0;
        local_2d0 = 0;
        local_2cc = 5;
        uStack_2bc = 0xf;
        local_2c8 = (longlong *)0x1000002000000bb;
        local_2a8 = 0xbb;
        uStack_2a4 = 0x1000002;
        uStack_2a0 = uStack_2c0;
        uStack_29c = 0xf;
        if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_288);
        }
        FUN_140041b80(&local_288,&local_2a8);
        local_1c8 = &local_288;
        local_2a8 = _DAT_1419e6650;
        uStack_2a4 = uRam00000001419e6654;
        uStack_2a0 = uRam00000001419e6658;
        uStack_29c = uRam00000001419e665c;
        if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_278);
        }
        FUN_140041b80(local_278,&local_2a8);
        local_1c0 = local_278;
        local_2a8 = _DAT_1419df7a0;
        uStack_2a4 = uRam00000001419df7a4;
        uStack_2a0 = uRam00000001419df7a8;
        uStack_29c = uRam00000001419df7ac;
        if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_268);
        }
        FUN_140041b80(&local_268,&local_2a8);
        local_1b8 = &local_268;
        local_2a8 = _DAT_1419e65f0;
        uStack_2a4 = uRam00000001419e65f4;
        uStack_2a0 = uRam00000001419e65f8;
        uStack_29c = uRam00000001419e65fc;
        if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_258);
        }
        FUN_140041b80(local_258,&local_2a8);
        local_1b0 = local_258;
        local_2a8 = (undefined4)DAT_1419df7b0;
        uStack_2a4 = DAT_1419df7b0._4_4_;
        uStack_2a0 = DAT_1419df7b8;
        uStack_29c = DAT_1419df7bc;
        if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_248);
        }
        FUN_140041b80(local_248,&local_2a8);
        local_1a8 = local_248;
        local_2a8 = _DAT_1419e6570;
        uStack_2a4 = uRam00000001419e6574;
        uStack_2a0 = uRam00000001419e6578;
        uStack_29c = uRam00000001419e657c;
        if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_238);
        }
        FUN_140041b80(local_238,&local_2a8);
        local_1a0 = local_238;
        ppuVar15 = &local_1c8;
        uVar16 = CONCAT44(uVar19,DAT_141a0a2e8);
        FUN_140e634e0(local_res8,local_res10,&local_2d8,6,uVar16,ppuVar15);
        local_1d8 = 0x454;
        if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2d8);
        }
        local_2d8 = 0;
        local_2d0 = 0;
        local_2cc = 5;
        uStack_2bc = 6;
        local_2c8 = local_res8;
        FUN_140e87440(&local_2c8,DAT_1419fe0e8,0x80000000,&local_178,uVar16 & 0xffffffffffffff00,
                      (ulonglong)ppuVar15 & 0xffffffffffffff00);
        if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2c8);
        }
        puVar4 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
        uStack_2bc = 0xf;
        local_2c8 = (longlong *)0x1000000000000ee;
        plVar18 = local_res8;
        FUN_140e87170(&local_2c8,DAT_1419fe0e8,0x80000000,&local_168,local_res8,local_res10);
        uVar19 = (undefined4)((ulonglong)plVar18 >> 0x20);
        if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2c8);
        }
        if (puVar4 != &local_288) {
          local_2a8 = *(undefined4 *)puVar4;
          uStack_2a4 = *(undefined4 *)((longlong)puVar4 + 4);
          uStack_2a0 = *(undefined4 *)(puVar4 + 1);
          uStack_29c = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_288);
          }
          FUN_140041b80(&local_288,&local_2a8);
        }
        local_1c8 = &local_288;
        local_2a8 = _DAT_141dd4208;
        uStack_2a4 = uRam0000000141dd420c;
        uStack_2a0 = uRam0000000141dd4210;
        uStack_29c = DAT_141dd4214;
        if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_278);
        }
        FUN_140041b80(local_278,&local_2a8);
        local_1c0 = local_278;
        iVar2 = FUN_140e851f0(&local_178,&local_168,DAT_141955260,1);
        if (iVar2 == -2 || -1 < iVar2) {
          uStack_2bc = 0;
          local_2c8 = (longlong *)&DAT_bff0000000000000;
          pplVar8 = (longlong **)&local_2c8;
          local_res20 = 2;
        }
        else {
          uStack_14c = 0;
          local_158 = (longlong *)0x3ff0000000000000;
          pplVar8 = &local_158;
          uVar3 = 1;
          local_res20 = 1;
        }
        uVar13 = uStack_14c;
        uVar12 = uStack_2bc;
        local_2a8 = *(undefined4 *)pplVar8;
        uStack_2a4 = *(undefined4 *)((longlong)pplVar8 + 4);
        uStack_2a0 = *(undefined4 *)(pplVar8 + 1);
        uStack_29c = *(undefined4 *)((longlong)pplVar8 + 0xc);
        if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_268);
        }
        FUN_140041b80(&local_268,&local_2a8);
        if (((uVar3 & 2) != 0) &&
           (uVar3 = uVar3 & 0xfffffffd, local_res20 = uVar3,
           (1 << ((byte)uVar12 & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_2c8);
        }
        if (((uVar3 & 1) != 0) && ((1 << ((byte)uVar13 & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_158);
        }
        local_1b8 = &local_268;
        FUN_140e634e0(local_res8,local_res10,&local_2d8,3,CONCAT44(uVar19,DAT_1419ff3d8),&local_1c8)
        ;
        local_1d8 = 0x456;
      }
      else if (iVar2 == 1) {
        local_1d8 = 0x45a;
        if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2d8);
        }
        local_2d8 = 0;
        local_2d0 = 0;
        local_2cc = 5;
        puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f230);
        puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
        if (puVar6 != &local_288) {
          local_2c8 = (longlong *)*puVar6;
          uStack_2c0 = *(undefined4 *)(puVar6 + 1);
          uStack_2bc = *(undefined4 *)((longlong)puVar6 + 0xc);
          if ((1 << ((byte)_local_27c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_288);
          }
          FUN_140041b80(&local_288,&local_2c8);
        }
        local_1c8 = &local_288;
        local_2c8 = (longlong *)CONCAT44(uRam0000000141dc6704,_DAT_141dc6700);
        uStack_2c0 = uRam0000000141dc6708;
        uStack_2bc = uRam0000000141dc670c;
        if ((1 << ((byte)_local_26c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_278);
        }
        FUN_140041b80(local_278,&local_2c8);
        local_1c0 = local_278;
        local_2c8 = (longlong *)CONCAT44(uRam00000001419e6534,_DAT_1419e6530);
        uStack_2c0 = uRam00000001419e6538;
        uStack_2bc = uRam00000001419e653c;
        if ((1 << ((byte)_local_25c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_268);
        }
        FUN_140041b80(&local_268,&local_2c8);
        local_1b8 = &local_268;
        FUN_140e609c0(local_res8);
        ppuVar15 = &local_1c8;
        puVar6 = (undefined8 *)gml_Script_arc(local_res8,local_res10,&local_2d8,3,ppuVar15);
        uVar19 = (undefined4)((ulonglong)ppuVar15 >> 0x20);
        if (puVar6 != puVar7) {
          local_2c8 = (longlong *)*puVar6;
          uStack_2c0 = *(undefined4 *)(puVar6 + 1);
          uStack_2bc = *(undefined4 *)((longlong)puVar6 + 0xc);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar7);
          }
          FUN_140041b80(puVar7,&local_2c8);
        }
        FUN_140e60910(1);
        local_1d8 = 0x45c;
        if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2d8);
        }
        local_2d8 = 0;
        local_2d0 = 0;
        local_2cc = 5;
        puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
        if (puVar6 != &local_288) {
          local_2c8 = (longlong *)*puVar6;
          uStack_2c0 = *(undefined4 *)(puVar6 + 1);
          uStack_2bc = *(undefined4 *)((longlong)puVar6 + 0xc);
          if ((1 << ((byte)_local_27c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_288);
          }
          FUN_140041b80(&local_288,&local_2c8);
        }
        local_1c8 = &local_288;
        local_2c8 = (longlong *)CONCAT44(uRam0000000141dd40fc,_DAT_141dd40f8);
        uStack_2c0 = uRam0000000141dd4100;
        uStack_2bc = DAT_141dd4104;
        if ((1 << ((byte)_local_26c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_278);
        }
        FUN_140041b80(local_278,&local_2c8);
        local_1c0 = local_278;
        ppuVar15 = &local_1c8;
        uVar16 = CONCAT44(uVar19,DAT_1419ff4f8);
        uVar5 = FUN_140e634e0(local_res8,local_res10,&local_2d8,2,uVar16,ppuVar15);
        uStack_2ac = 0;
        local_2b8 = (longlong *)&DAT_bff0000000000000;
        iVar2 = FUN_140e851f0(uVar5,&local_2b8,DAT_141955260,0);
        if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2b8);
        }
        if (iVar2 == 0) {
          uStack_2ac = 6;
          local_2b8 = local_res8;
          ppuVar15 = (undefined8 **)((ulonglong)ppuVar15 & 0xffffffffffffff00);
          uVar16 = uVar16 & 0xffffffffffffff00;
          FUN_140e87440(&local_2b8,DAT_141a0cfc8,0x80000000,&local_108,uVar16,ppuVar15);
          if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2b8);
          }
          uStack_2ac = 0;
          local_2b8 = (longlong *)0x4026000000000000;
          uVar3 = FUN_140e851f0(&local_108,&local_2b8,DAT_141955260,1);
          if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2b8);
          }
          if (uVar3 < 0x80000000) {
            local_1d8 = 0x45e;
            if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1f8);
            }
            local_1f8 = 0;
            local_1f0 = 0;
            local_1ec = 5;
            puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
            uStack_2ac = 6;
            local_2b8 = local_res8;
            uVar16 = uVar16 & 0xffffffffffffff00;
            FUN_140e87440(&local_2b8,DAT_141a101f8,0x80000000,&local_b8,uVar16,
                          (ulonglong)ppuVar15 & 0xffffffffffffff00);
            uVar19 = (undefined4)(uVar16 >> 0x20);
            if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2b8);
            }
            if (puVar6 != &local_268) {
              local_2c8 = (longlong *)*puVar6;
              uStack_2c0 = *(undefined4 *)(puVar6 + 1);
              uStack_2bc = *(undefined4 *)((longlong)puVar6 + 0xc);
              if ((1 << ((byte)_local_25c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_268);
              }
              FUN_140041b80(&local_268,&local_2c8);
            }
            local_1b8 = &local_268;
            local_2c8 = (longlong *)CONCAT44(uRam0000000141dd40fc,_DAT_141dd40f8);
            uStack_2c0 = uRam0000000141dd4100;
            uStack_2bc = DAT_141dd4104;
            if ((1 << ((byte)_local_24c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_258);
            }
            FUN_140041b80(local_258,&local_2c8);
            local_1b0 = local_258;
            local_2c8 = local_b8;
            uStack_2c0 = uStack_b0;
            uStack_2bc = uStack_ac;
            if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_248);
            }
            FUN_140041b80(local_248,&local_2c8);
            local_1a8 = local_248;
            FUN_140e634e0(local_res8,local_res10,&local_1f8,3,CONCAT44(uVar19,DAT_1419ff3d8),
                          &local_1b8);
            local_1d8 = 0x45f;
            if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2d8);
            }
            local_2d8 = 0;
            local_2d0 = 0;
            local_2cc = 5;
            puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
            uStack_2ac = 0xf;
            local_2b8 = (longlong *)0x1000000000000ee;
            plVar18 = local_res8;
            FUN_140e87170(&local_2b8,DAT_1419fe0e8,0x80000000,&local_168,local_res8,local_res10);
            uVar19 = (undefined4)((ulonglong)plVar18 >> 0x20);
            if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2b8);
            }
            if (puVar6 != &local_288) {
              local_2c8 = (longlong *)*puVar6;
              uStack_2c0 = *(undefined4 *)(puVar6 + 1);
              uStack_2bc = *(undefined4 *)((longlong)puVar6 + 0xc);
              if ((1 << ((byte)_local_27c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_288);
              }
              FUN_140041b80(&local_288,&local_2c8);
            }
            local_1c8 = &local_288;
            local_2c8 = (longlong *)CONCAT44(uRam0000000141dd41ec,_DAT_141dd41e8);
            uStack_2c0 = uRam0000000141dd41f0;
            uStack_2bc = DAT_141dd41f4;
            if ((1 << ((byte)_local_26c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_278);
            }
            FUN_140041b80(local_278,&local_2c8);
            local_1c0 = local_278;
            local_2c8 = local_168;
            uStack_2c0 = uStack_160;
            uStack_2bc = uStack_15c;
            if ((1 << ((byte)_local_25c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_268);
            }
            FUN_140041b80(&local_268,&local_2c8);
            local_1b8 = &local_268;
            FUN_140e634e0(local_res8,local_res10,&local_2d8,3,CONCAT44(uVar19,DAT_1419ff3d8),
                          &local_1c8);
            local_1d8 = 0x460;
            if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2d8);
            }
            local_2d8 = 0;
            local_2d0 = 0;
            local_2cc = 5;
            puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
            uStack_2ac = 0xf;
            local_2b8 = (longlong *)0x1000000000000ee;
            plVar18 = local_res8;
            FUN_140e87170(&local_2b8,DAT_1419fe158,0x80000000,&local_f8,local_res8,local_res10);
            uVar19 = (undefined4)((ulonglong)plVar18 >> 0x20);
            if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2b8);
            }
            if (puVar6 != &local_288) {
              local_2c8 = (longlong *)*puVar6;
              uStack_2c0 = *(undefined4 *)(puVar6 + 1);
              uStack_2bc = *(undefined4 *)((longlong)puVar6 + 0xc);
              if ((1 << ((byte)_local_27c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_288);
              }
              FUN_140041b80(&local_288,&local_2c8);
            }
            local_1c8 = &local_288;
            local_2c8 = (longlong *)CONCAT44(uRam0000000141dd425c,_DAT_141dd4258);
            uStack_2c0 = uRam0000000141dd4260;
            uStack_2bc = DAT_141dd4264;
            if ((1 << ((byte)_local_26c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_278);
            }
            FUN_140041b80(local_278,&local_2c8);
            local_1c0 = local_278;
            local_2c8 = local_f8;
            uStack_2c0 = uStack_f0;
            uStack_2bc = uStack_ec;
            if ((1 << ((byte)_local_25c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_268);
            }
            FUN_140041b80(&local_268,&local_2c8);
            local_1b8 = &local_268;
            ppuVar15 = &local_1c8;
            uVar16 = CONCAT44(uVar19,DAT_1419ff3d8);
            FUN_140e634e0(local_res8,local_res10,&local_2d8,3,uVar16,ppuVar15);
            local_1d8 = 0x462;
            if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2d8);
            }
            local_2d8 = 0;
            local_2d0 = 0;
            local_2cc = 5;
            puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
            uStack_2ac = 6;
            local_2b8 = local_res8;
            FUN_140e87440(&local_2b8,DAT_1419fe0e8,0x80000000,&local_178,uVar16 & 0xffffffffffffff00
                          ,(ulonglong)ppuVar15 & 0xffffffffffffff00);
            if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2b8);
            }
            uStack_2ac = 0xf;
            local_2b8 = (longlong *)0x1000000000000ee;
            plVar18 = local_res8;
            FUN_140e87170(&local_2b8,DAT_1419fe0e8,0x80000000,&local_168,local_res8,local_res10);
            uVar19 = (undefined4)((ulonglong)plVar18 >> 0x20);
            if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2b8);
            }
            if (puVar6 != &local_288) {
              local_2c8 = (longlong *)*puVar6;
              uStack_2c0 = *(undefined4 *)(puVar6 + 1);
              uStack_2bc = *(undefined4 *)((longlong)puVar6 + 0xc);
              if ((1 << ((byte)_local_27c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_288);
              }
              FUN_140041b80(&local_288,&local_2c8);
            }
            local_1c8 = &local_288;
            local_2c8 = (longlong *)CONCAT44(uRam0000000141dd420c,_DAT_141dd4208);
            uStack_2c0 = uRam0000000141dd4210;
            uStack_2bc = DAT_141dd4214;
            if ((1 << ((byte)_local_26c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_278);
            }
            FUN_140041b80(local_278,&local_2c8);
            local_1c0 = local_278;
            iVar2 = FUN_140e851f0(&local_178,&local_168,DAT_141955260,1);
            if (iVar2 == -2 || -1 < iVar2) {
              uStack_2ac = 0;
              local_2b8 = (longlong *)&DAT_bff0000000000000;
              pplVar8 = (longlong **)&local_2b8;
              uVar12 = 8;
            }
            else {
              uStack_28c = 0;
              local_298 = (longlong *)0x3ff0000000000000;
              pplVar8 = &local_298;
              uVar12 = 4;
            }
            uVar3 = uStack_28c;
            uVar13 = uStack_2ac;
            local_2c8 = *pplVar8;
            uStack_2c0 = *(undefined4 *)(pplVar8 + 1);
            uStack_2bc = *(undefined4 *)((longlong)pplVar8 + 0xc);
            local_res20 = uVar12;
            if ((1 << ((byte)_local_25c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_268);
            }
            FUN_140041b80(&local_268,&local_2c8);
            if (((uVar12 & 8) != 0) &&
               (uVar12 = uVar12 & 0xfffffff7, local_res20 = uVar12,
               (1 << ((byte)uVar13 & 0x1f) & 0x46U) != 0)) {
              FUN_140041a50(&local_2b8);
            }
            if (((uVar12 & 4) != 0) &&
               (uVar12 = uVar12 & 0xfffffffb, (1 << ((byte)uVar3 & 0x1f) & 0x46U) != 0)) {
              FUN_140041a50(&local_298);
            }
            local_1b8 = &local_268;
            ppuVar15 = &local_1c8;
            uVar16 = CONCAT44(uVar19,DAT_1419ff3d8);
            FUN_140e634e0(local_res8,local_res10,&local_2d8,3,uVar16,ppuVar15);
          }
        }
        local_1d8 = 0x465;
        uStack_2ac = 6;
        local_2b8 = local_res8;
        uVar16 = uVar16 & 0xffffffffffffff00;
        FUN_140e87440(&local_2b8,DAT_141a0cfc8,0x80000000,&local_108,uVar16,
                      (ulonglong)ppuVar15 & 0xffffffffffffff00);
        uVar19 = (undefined4)(uVar16 >> 0x20);
        if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2b8);
        }
        uStack_2ac = 0;
        local_2b8 = (longlong *)0x4028000000000000;
        iVar2 = FUN_140e851f0(&local_108,&local_2b8,DAT_141955260,1);
        if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2b8);
        }
        if (0 < iVar2) {
          if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2d8);
          }
          local_2d8 = 0;
          local_2d0 = 0;
          local_2cc = 5;
          puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
          if (puVar6 != &local_288) {
            local_2c8 = (longlong *)*puVar6;
            uStack_2c0 = *(undefined4 *)(puVar6 + 1);
            uStack_2bc = *(undefined4 *)((longlong)puVar6 + 0xc);
            if ((1 << ((byte)_local_27c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_288);
            }
            FUN_140041b80(&local_288,&local_2c8);
          }
          local_1c8 = &local_288;
          local_2c8 = (longlong *)CONCAT44(uRam0000000141dd410c,_DAT_141dd4108);
          uStack_2c0 = uRam0000000141dd4110;
          uStack_2bc = DAT_141dd4114;
          if ((1 << ((byte)_local_26c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_278);
          }
          FUN_140041b80(local_278,&local_2c8);
          local_1c0 = local_278;
          ppuVar15 = &local_1c8;
          uVar16 = CONCAT44(uVar19,DAT_1419ff4f8);
          uVar5 = FUN_140e634e0(local_res8,local_res10,&local_2d8,2,uVar16,ppuVar15);
          uStack_2ac = 0;
          local_2b8 = (longlong *)0xc010000000000000;
          iVar2 = FUN_140e851f0(uVar5,&local_2b8,DAT_141955260,0);
          if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2b8);
          }
          if (iVar2 == 0) {
            local_1d8 = 0x467;
            if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1f8);
            }
            local_1f8 = 0;
            local_1f0 = 0;
            local_1ec = 5;
            if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_148);
            }
            local_148 = 0;
            local_140 = 0;
            local_13c = 5;
            puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
            uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5ef8);
            uStack_2ac = 6;
            local_2b8 = local_res8;
            uVar20 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
            uVar16 = uVar16 & 0xffffffffffffff00;
            FUN_140e87440(&local_2b8,DAT_1419fe0e8,0x80000000,&local_178,uVar16,uVar20);
            if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2b8);
            }
            uStack_2ac = 6;
            local_2b8 = local_res8;
            uVar16 = uVar16 & 0xffffffffffffff00;
            FUN_140e87440(&local_2b8,DAT_1419fe158,0x80000000,&local_128,uVar16,
                          uVar20 & 0xffffffffffffff00);
            uVar19 = (undefined4)(uVar16 >> 0x20);
            if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2b8);
            }
            uStack_2ac = 0;
            local_2b8 = (longlong *)0x4018000000000000;
            local_res20 = uVar12 | 0x10;
            FUN_140042560(&local_2b8,uVar5);
            uStack_28c = local_16c;
            uStack_290 = local_170;
            if ((1 << ((byte)local_16c & 0x1f) & 0x46U) == 0) {
              local_298 = local_178;
            }
            else {
              FUN_1400419b0(&local_298,&local_178);
            }
            local_res20 = uVar12 | 0x30;
            FUN_1400460e0(&local_298,&local_2b8);
            local_2c8 = local_298;
            uStack_2c0 = uStack_290;
            uStack_2bc = uStack_28c;
            if ((1 << ((byte)_local_25c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_268);
            }
            FUN_140041b80(&local_268,&local_2c8);
            local_res20 = uVar12 | 0x10;
            if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_298);
            }
            local_res20 = uVar12;
            if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2b8);
            }
            local_1b8 = &local_268;
            uStack_28c = local_11c;
            uStack_290 = local_120;
            if ((1 << ((byte)local_11c & 0x1f) & 0x46U) == 0) {
              local_298 = local_128;
            }
            else {
              FUN_1400419b0(&local_298,&local_128);
            }
            local_res20 = uVar12 | 0x40;
            uStack_2ac = 7;
            local_2b8 = (longlong *)CONCAT44(local_2b8._4_4_,8);
            FUN_1400462a0(&local_298,&local_2b8);
            if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2b8);
            }
            local_2c8 = local_298;
            uStack_2c0 = uStack_290;
            uStack_2bc = uStack_28c;
            if ((1 << ((byte)_local_24c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_258);
            }
            FUN_140041b80(local_258,&local_2c8);
            local_res20 = uVar12;
            if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_298);
            }
            local_1b0 = local_258;
            local_2c8 = (longlong *)CONCAT44(uRam0000000141dd421c,_DAT_141dd4218);
            uStack_2c0 = uRam0000000141dd4220;
            uStack_2bc = DAT_141dd4224;
            if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_248);
            }
            FUN_140041b80(local_248,&local_2c8);
            local_1a8 = local_248;
            uStack_2bc = 0xf;
            local_2c8 = (longlong *)0x1000000000000a1;
            local_158 = (longlong *)0x1000000000000a1;
            uStack_150 = uStack_2c0;
            uStack_14c = 0xf;
            if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_238);
            }
            FUN_140041b80(local_238,&local_158);
            local_1a0 = local_238;
            if (puVar6 != &local_228) {
              local_2c8 = (longlong *)*puVar6;
              uStack_2c0 = *(undefined4 *)(puVar6 + 1);
              uStack_2bc = *(undefined4 *)((longlong)puVar6 + 0xc);
              if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_228);
              }
              FUN_140041b80(&local_228,&local_2c8);
            }
            local_198 = &local_228;
            local_2c8 = (longlong *)CONCAT44(uRam0000000141dd410c,_DAT_141dd4108);
            uStack_2c0 = uRam0000000141dd4110;
            uStack_2bc = DAT_141dd4114;
            if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_218);
            }
            FUN_140041b80(local_218,&local_2c8);
            local_190 = local_218;
            uVar5 = CONCAT44(uVar19,DAT_141a0a7c8);
            puVar6 = (undefined8 *)
                     FUN_140e634e0(local_res8,local_res10,&local_148,4,uVar5,&local_1b8);
            uVar19 = (undefined4)((ulonglong)uVar5 >> 0x20);
            if (puVar6 != &local_208) {
              local_2c8 = (longlong *)*puVar6;
              uStack_2c0 = *(undefined4 *)(puVar6 + 1);
              uStack_2bc = *(undefined4 *)((longlong)puVar6 + 0xc);
              if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_208);
              }
              FUN_140041b80(&local_208,&local_2c8);
            }
            uVar5 = CONCAT44(uVar19,DAT_1419ff3d8);
            local_188 = &local_208;
            FUN_140e634e0(local_res8,local_res10,&local_1f8,3,uVar5,&local_198);
            uVar19 = (undefined4)((ulonglong)uVar5 >> 0x20);
            local_1d8 = 0x468;
            if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2d8);
            }
            local_2d8 = 0;
            local_2d0 = 0;
            local_2cc = 5;
            puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
            if (puVar6 != &local_288) {
              local_2c8 = (longlong *)*puVar6;
              uStack_2c0 = *(undefined4 *)(puVar6 + 1);
              uStack_2bc = *(undefined4 *)((longlong)puVar6 + 0xc);
              if ((1 << ((byte)_local_27c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_288);
              }
              FUN_140041b80(&local_288,&local_2c8);
            }
            local_1c8 = &local_288;
            local_2c8 = (longlong *)CONCAT44(uRam0000000141dd410c,_DAT_141dd4108);
            uStack_2c0 = uRam0000000141dd4110;
            uStack_2bc = DAT_141dd4114;
            if ((1 << ((byte)_local_26c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_278);
            }
            FUN_140041b80(local_278,&local_2c8);
            local_1c0 = local_278;
            uVar17 = CONCAT44(uVar19,DAT_1419ff4f8);
            uVar5 = FUN_140e634e0(local_res8,local_res10,&local_2d8,2,uVar17,&local_1c8);
            iVar2 = FUN_140e63cb0(local_a0,&local_res8,&local_res10,uVar5);
            if (0 < iVar2) {
              do {
                uVar19 = (undefined4)((ulonglong)uVar17 >> 0x20);
                (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5ef8);
                (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f230);
                local_1d8 = 0x46a;
                if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_1f8);
                }
                local_1f8 = 0;
                local_1f0 = 0;
                local_1ec = 5;
                puVar4 = (undefined8 *)(**(code **)(*local_res10 + 8))(local_res10,DAT_1419fd438);
                puVar9 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419feaa8);
                if (puVar4 != &local_268) {
                  local_2a8 = *(undefined4 *)puVar4;
                  uStack_2a4 = *(undefined4 *)((longlong)puVar4 + 4);
                  uStack_2a0 = *(undefined4 *)(puVar4 + 1);
                  uStack_29c = *(undefined4 *)((longlong)puVar4 + 0xc);
                  if ((1 << ((byte)_local_25c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_268);
                  }
                  FUN_140041b80(&local_268,&local_2a8);
                }
                local_1b8 = &local_268;
                local_2a8 = _DAT_141dd40f8;
                uStack_2a4 = uRam0000000141dd40fc;
                uStack_2a0 = uRam0000000141dd4100;
                uStack_29c = DAT_141dd4104;
                if ((1 << ((byte)_local_24c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_258);
                }
                FUN_140041b80(local_258,&local_2a8);
                local_1b0 = local_258;
                FUN_140e609c0(local_res8);
                uVar5 = CONCAT44(uVar19,DAT_1419ff4f8);
                puVar10 = (undefined4 *)
                          FUN_140e634e0(local_res8,local_res10,&local_1f8,2,uVar5,&local_1b8);
                uVar19 = (undefined4)((ulonglong)uVar5 >> 0x20);
                if (puVar10 != puVar9) {
                  local_2a8 = *puVar10;
                  uStack_2a4 = puVar10[1];
                  uStack_2a0 = puVar10[2];
                  uStack_29c = puVar10[3];
                  if ((1 << ((byte)puVar9[3] & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(puVar9);
                  }
                  FUN_140041b80(puVar9,&local_2a8);
                }
                FUN_140e60910(1);
                local_1d8 = 0x46b;
                if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_2d8);
                }
                local_2d8 = 0;
                local_2d0 = 0;
                local_2cc = 5;
                puVar9 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fe9a8);
                if (puVar4 != &local_288) {
                  local_2a8 = *(undefined4 *)puVar4;
                  uStack_2a4 = *(undefined4 *)((longlong)puVar4 + 4);
                  uStack_2a0 = *(undefined4 *)(puVar4 + 1);
                  uStack_29c = *(undefined4 *)((longlong)puVar4 + 0xc);
                  if ((1 << ((byte)_local_27c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_288);
                  }
                  FUN_140041b80(&local_288,&local_2a8);
                }
                local_1c8 = &local_288;
                local_2a8 = _DAT_141dd41e8;
                uStack_2a4 = uRam0000000141dd41ec;
                uStack_2a0 = uRam0000000141dd41f0;
                uStack_29c = DAT_141dd41f4;
                if ((1 << ((byte)_local_26c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_278);
                }
                FUN_140041b80(local_278,&local_2a8);
                local_1c0 = local_278;
                FUN_140e609c0(local_res8);
                uVar5 = CONCAT44(uVar19,DAT_1419ff4f8);
                puVar10 = (undefined4 *)
                          FUN_140e634e0(local_res8,local_res10,&local_2d8,2,uVar5,&local_1c8);
                uVar19 = (undefined4)((ulonglong)uVar5 >> 0x20);
                if (puVar10 != puVar9) {
                  local_2a8 = *puVar10;
                  uStack_2a4 = puVar10[1];
                  uStack_2a0 = puVar10[2];
                  uStack_29c = puVar10[3];
                  if ((1 << ((byte)puVar9[3] & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(puVar9);
                  }
                  FUN_140041b80(puVar9,&local_2a8);
                }
                FUN_140e60910(1);
                local_1d8 = 0x46c;
                if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_2d8);
                }
                local_2d8 = 0;
                local_2d0 = 0;
                local_2cc = 5;
                puVar9 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419feba8);
                if (puVar4 != &local_288) {
                  local_2a8 = *(undefined4 *)puVar4;
                  uStack_2a4 = *(undefined4 *)((longlong)puVar4 + 4);
                  uStack_2a0 = *(undefined4 *)(puVar4 + 1);
                  uStack_29c = *(undefined4 *)((longlong)puVar4 + 0xc);
                  if ((1 << ((byte)_local_27c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_288);
                  }
                  FUN_140041b80(&local_288,&local_2a8);
                }
                local_1c8 = &local_288;
                local_2a8 = _DAT_141dd4258;
                uStack_2a4 = uRam0000000141dd425c;
                uStack_2a0 = uRam0000000141dd4260;
                uStack_29c = DAT_141dd4264;
                if ((1 << ((byte)_local_26c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_278);
                }
                FUN_140041b80(local_278,&local_2a8);
                local_1c0 = local_278;
                FUN_140e609c0(local_res8);
                ppuVar15 = &local_1c8;
                uVar16 = CONCAT44(uVar19,DAT_1419ff4f8);
                puVar10 = (undefined4 *)
                          FUN_140e634e0(local_res8,local_res10,&local_2d8,2,uVar16,ppuVar15);
                if (puVar10 != puVar9) {
                  local_2a8 = *puVar10;
                  uStack_2a4 = puVar10[1];
                  uStack_2a0 = puVar10[2];
                  uStack_29c = puVar10[3];
                  if ((1 << ((byte)puVar9[3] & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(puVar9);
                  }
                  FUN_140041b80(puVar9,&local_2a8);
                }
                FUN_140e60910(1);
                local_1d8 = 0x46e;
                puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f0d0);
                uStack_14c = 6;
                local_158 = local_res10;
                uVar20 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
                uVar16 = uVar16 & 0xffffffffffffff00;
                FUN_140e87440(&local_158,DAT_141a0a828,0x80000000,&local_c8,uVar16,uVar20);
                if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_158);
                }
                FUN_140e609c0(local_res8);
                if (&local_c8 != puVar6) {
                  local_2a8 = (undefined4)local_c8;
                  uStack_2a4 = local_c8._4_4_;
                  uStack_2a0 = uStack_c0;
                  uStack_29c = uStack_bc;
                  if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(puVar6);
                  }
                  FUN_140041b80(puVar6,&local_2a8);
                }
                FUN_140e60910(1);
                local_1d8 = 0x470;
                puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe9a8);
                puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fe988);
                uStack_2bc = 6;
                local_2c8 = local_res8;
                uVar16 = uVar16 & 0xffffffffffffff00;
                FUN_140e87440(&local_2c8,DAT_1419fe0e8,0x80000000,&local_178,uVar16,
                              uVar20 & 0xffffffffffffff00);
                uVar19 = (undefined4)(uVar16 >> 0x20);
                if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_2c8);
                }
                uStack_28c = *(uint *)((longlong)puVar6 + 0xc);
                uStack_290 = *(undefined4 *)(puVar6 + 1);
                if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) == 0) {
                  local_298 = (longlong *)*puVar6;
                }
                else {
                  FUN_1400419b0(&local_298,puVar6);
                }
                local_res20 = uVar12 | 0x80;
                FUN_1400462a0(&local_298,&local_178);
                if ((uStack_28c & 0xffffff) == 0) {
                  uVar13 = SUB84(local_298,0);
                }
                else {
                  uVar13 = FUN_140e4b060(&local_298);
                }
                uVar5 = FUN_140e78d00(uVar13);
                if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(puVar7);
                }
                *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
                *puVar7 = uVar5;
                if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_298);
                }
                local_1d8 = 0x472;
                puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a848);
                if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(puVar6);
                }
                *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
                *puVar6 = 0;
                local_1d8 = 0x474;
                if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_2d8);
                }
                local_2d8 = 0;
                local_2d0 = 0;
                local_2cc = 5;
                puVar9 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f5ef8);
                if (puVar4 != &local_288) {
                  local_2a8 = *(undefined4 *)puVar4;
                  uStack_2a4 = *(undefined4 *)((longlong)puVar4 + 4);
                  uStack_2a0 = *(undefined4 *)(puVar4 + 1);
                  uStack_29c = *(undefined4 *)((longlong)puVar4 + 0xc);
                  if ((1 << ((byte)_local_27c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_288);
                  }
                  FUN_140041b80(&local_288,&local_2a8);
                }
                local_1c8 = &local_288;
                local_2a8 = _DAT_141dd4208;
                uStack_2a4 = uRam0000000141dd420c;
                uStack_2a0 = uRam0000000141dd4210;
                uStack_29c = DAT_141dd4214;
                if ((1 << ((byte)_local_26c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_278);
                }
                FUN_140041b80(local_278,&local_2a8);
                local_1c0 = local_278;
                FUN_140e609c0(local_res8);
                uVar17 = CONCAT44(uVar19,DAT_1419ff4f8);
                puVar10 = (undefined4 *)
                          FUN_140e634e0(local_res8,local_res10,&local_2d8,2,uVar17,&local_1c8);
                if (puVar10 != puVar9) {
                  local_2a8 = *puVar10;
                  uStack_2a4 = puVar10[1];
                  uStack_2a0 = puVar10[2];
                  uStack_29c = puVar10[3];
                  if ((1 << ((byte)puVar9[3] & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(puVar9);
                  }
                  FUN_140041b80(puVar9,&local_2a8);
                }
                FUN_140e60910(1);
                local_1d8 = 0x475;
                uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5ef8);
                puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
                FUN_140e609c0(local_res8);
                uStack_2ac = 0;
                local_2b8 = (longlong *)0x4008000000000000;
                local_res20 = uVar12 | 0x100;
                FUN_140042560(&local_2b8,uVar5);
                if (&local_2b8 != puVar4) {
                  local_2a8 = (undefined4)local_2b8;
                  uStack_2a4 = local_2b8._4_4_;
                  uStack_2a0 = uStack_2b0;
                  uStack_29c = uStack_2ac;
                  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(puVar4);
                  }
                  FUN_140041b80(puVar4,&local_2a8);
                }
                local_res20 = uVar12;
                if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_2b8);
                }
                FUN_140e60910(1);
                cVar1 = FUN_140e643f0(local_a0,&local_res8,&local_res10);
              } while (cVar1 != '\0');
              puVar4 = local_a8;
            }
            FUN_140e63970(local_a0,&local_res8,&local_res10);
            if (local_90 != 0) {
              FUN_140e4cd60();
            }
          }
        }
        local_1d8 = 0x47b;
        if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2d8);
        }
        local_2d8 = 0;
        local_2d0 = 0;
        local_2cc = 5;
        local_2a8 = (undefined4)DAT_1419df7b0;
        uStack_2a4 = DAT_1419df7b0._4_4_;
        uStack_2a0 = DAT_1419df7b8;
        uStack_29c = DAT_1419df7bc;
        if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_288);
        }
        FUN_140041b80(&local_288,&local_2a8);
        local_1c8 = &local_288;
        local_2a8 = (undefined4)DAT_1419df7b0;
        uStack_2a4 = DAT_1419df7b0._4_4_;
        uStack_2a0 = DAT_1419df7b8;
        uStack_29c = DAT_1419df7bc;
        if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_278);
        }
        FUN_140041b80(local_278,&local_2a8);
        local_1c0 = local_278;
        uVar5 = gml_Script_animcurve_lerp(local_res8,local_res10,&local_2d8,2,&local_1c8);
        cVar1 = FUN_140e491e0(uVar5);
        if (cVar1 != '\0') {
          local_1d8 = 0x47d;
          if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f8);
          }
          local_1f8 = 0;
          local_1f0 = 0;
          local_1ec = 5;
          local_2a8 = _DAT_1419e6550;
          uStack_2a4 = uRam00000001419e6554;
          uStack_2a0 = uRam00000001419e6558;
          uStack_29c = uRam00000001419e655c;
          if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_268);
          }
          FUN_140041b80(&local_268,&local_2a8);
          local_1b8 = &local_268;
          local_2a8 = (undefined4)DAT_1419df7b0;
          uStack_2a4 = DAT_1419df7b0._4_4_;
          uStack_2a0 = DAT_1419df7b8;
          uStack_29c = DAT_1419df7bc;
          if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_258);
          }
          FUN_140041b80(local_258,&local_2a8);
          local_1b0 = local_258;
          gml_Script_truestate_begin_step(local_res8,local_res10,&local_1f8,2,&local_1b8);
        }
        local_1d8 = 0x481;
        if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2d8);
        }
        local_2d8 = 0;
        local_2d0 = 0;
        local_2cc = 5;
        uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd4b8);
        FUN_140e63610(local_res8,local_res10,&local_2d8,0,uVar5,0);
        local_1d8 = 0x482;
        if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2d8);
        }
        local_2d8 = 0;
        local_2d0 = 0;
        local_2cc = 5;
        uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd418);
        FUN_140e63610(local_res8,local_res10,&local_2d8,0,uVar5,0);
        local_1d8 = 0x484;
        if (puVar4 != &local_138) {
          local_2a8 = *(undefined4 *)puVar4;
          uStack_2a4 = *(undefined4 *)((longlong)puVar4 + 4);
          uStack_2a0 = *(undefined4 *)(puVar4 + 1);
          uStack_29c = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_138);
          }
          FUN_140041b80(&local_138,&local_2a8);
        }
        FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_138);
        local_1d8 = 0x486;
      }
      else if (iVar2 == 2) {
        local_1d8 = 0x48a;
        if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2d8);
        }
        local_2d8 = 0;
        local_2d0 = 0;
        local_2cc = 5;
        uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5b18);
        FUN_140e63610(local_res8,local_res10,&local_2d8,0,uVar5,0);
        local_1d8 = 0x48b;
      }
      else if (iVar2 == 3) {
        local_1d8 = 0x48f;
      }
      break;
    }
    uVar11 = uVar11 + 1;
  } while (uVar11 < 4);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(&local_288,0x10,9,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1e8;
  return local_res18;
}

