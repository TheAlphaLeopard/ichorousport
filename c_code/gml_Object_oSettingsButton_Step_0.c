// gml_Object_oSettingsButton_Step_0 @ 0x140d69500

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oSettingsButton_Step_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *local_res8;
  undefined8 local_res10;
  undefined1 **ppuVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  ulonglong in_stack_fffffffffffffed0;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [12];
  byte local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_94;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined1 local_48 [16];
  longlong local_38;
  
  local_b0 = "gml_Object_oScroll_Step_0";
  local_a8 = 0;
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_f8,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_4c = 0xffffff;
  local_58 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  uStack_6c = 0xffffff;
  local_78 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_a8 = 3;
  local_128 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_120 = DAT_1419df7b8;
  uStack_11c = DAT_1419df7bc;
  if ((1 << (local_f8[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_128);
  local_90 = local_f8;
  local_128 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_120 = DAT_1419df7b8;
  uStack_11c = DAT_1419df7bc;
  if ((1 << (local_e8[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_128);
  local_88 = local_e8;
  ppuVar5 = &local_90;
  uVar3 = gml_Script_animcurve_lerp(local_res8,local_res10,&local_118,2,ppuVar5);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    uStack_11c = 6;
    local_128 = local_res8;
    in_stack_fffffffffffffed0 = in_stack_fffffffffffffed0 & 0xffffffffffffff00;
    ppuVar5 = (undefined1 **)((ulonglong)ppuVar5 & 0xffffffffffffff00);
    FUN_140e87440(&local_128,DAT_141a0a728,0x80000000,&local_58,ppuVar5,in_stack_fffffffffffffed0);
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    uStack_11c = 0xf;
    local_128 = (longlong *)0x100000100000331;
    iVar2 = FUN_140e851f0(&local_58,&local_128,DAT_141955260,0);
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    if (iVar2 == 0) {
      local_a8 = 5;
      uStack_11c = 0xf;
      local_128 = (longlong *)0x100000100000330;
      local_108 = 0x330;
      uStack_104 = 0x1000001;
      uStack_100 = uStack_120;
      uStack_fc = 0xf;
      if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a0);
      }
      FUN_140041b80(&local_a0,&local_108);
      FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_a0);
    }
  }
  local_a8 = 9;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  uStack_11c = 6;
  local_128 = local_res8;
  in_stack_fffffffffffffed0 = in_stack_fffffffffffffed0 & 0xffffffffffffff00;
  uVar6 = (ulonglong)ppuVar5 & 0xffffffffffffff00;
  FUN_140e87440(&local_128,DAT_1419fe0e8,0x80000000,&local_68,uVar6,in_stack_fffffffffffffed0);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  uStack_11c = 6;
  local_128 = local_res8;
  uVar6 = uVar6 & 0xffffffffffffff00;
  FUN_140e87440(&local_128,DAT_1419fe158,0x80000000,&local_78,uVar6,
                in_stack_fffffffffffffed0 & 0xffffffffffffff00);
  uVar7 = (undefined4)(uVar6 >> 0x20);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_108 = (undefined4)local_68;
  uStack_104 = local_68._4_4_;
  uStack_100 = uStack_60;
  uStack_fc = uStack_5c;
  if ((1 << (local_f8[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_108);
  local_90 = local_f8;
  local_108 = (undefined4)local_78;
  uStack_104 = local_78._4_4_;
  uStack_100 = uStack_70;
  uStack_fc = uStack_6c;
  if ((1 << (local_e8[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_108);
  local_88 = local_e8;
  uStack_11c = 0xf;
  local_128 = (longlong *)0x1000000000000ef;
  local_108 = 0xef;
  uStack_104 = 0x1000000;
  uStack_100 = uStack_120;
  uStack_fc = 0xf;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_108);
  local_80 = local_d8;
  uVar3 = FUN_140e634e0(local_res8,local_res10,&local_118,3,CONCAT44(uVar7,DAT_141a12628),&local_90)
  ;
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    local_a8 = 0xb;
    FUN_140edd0e0(local_res8,local_res10,0,0);
    local_a8 = 0xd;
    uStack_11c = 0xf;
    local_128 = (longlong *)0x1000000000000ee;
    iVar2 = FUN_140e63cb0(local_48,&local_res8,&local_res10,&local_128);
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    if (0 < iVar2) {
      do {
        local_a8 = 0xf;
        puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a08c78);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar4);
        }
        *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
        *puVar4 = 0x4056800000000000;
        local_a8 = 0x10;
        if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        local_118 = 0;
        local_110 = 0;
        local_10c = 5;
        local_108 = _DAT_1419edc00;
        uStack_104 = uRam00000001419edc04;
        uStack_100 = uRam00000001419edc08;
        uStack_fc = uRam00000001419edc0c;
        if ((1 << (local_f8[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_f8);
        }
        FUN_140041b80(local_f8,&local_108);
        local_90 = local_f8;
        local_108 = (undefined4)DAT_1419df7b0;
        uStack_104 = DAT_1419df7b0._4_4_;
        uStack_100 = DAT_1419df7b8;
        uStack_fc = DAT_1419df7bc;
        if ((1 << (local_e8[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_e8);
        }
        FUN_140041b80(local_e8,&local_108);
        local_88 = local_e8;
        gml_Script_truestate_begin_step(local_res8,local_res10,&local_118,2,&local_90);
        cVar1 = FUN_140e643f0(local_48,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(local_48,&local_res8,&local_res10);
    local_a8 = 0x13;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_bc = 0;
    local_c8 = 0x3ff0000000000000;
    uStack_11c = 0xf;
    local_128 = (longlong *)0x100000000000058;
    FUN_140e87930(&local_128,DAT_1419fefe8,0x80000000,&local_c8);
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    if (local_38 != 0) {
      FUN_140e4cd60();
    }
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  _eh_vector_destructor_iterator_(local_f8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return;
}

