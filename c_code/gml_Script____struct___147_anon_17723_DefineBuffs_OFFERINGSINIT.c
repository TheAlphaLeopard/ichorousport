// gml_Script____struct___147_anon_17723_DefineBuffs_OFFERINGSINIT @ 0x1403d5fd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___147_anon_17723_DefineBuffs_OFFERINGSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *local_res8;
  undefined8 local_res10;
  code *pcVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  ulonglong in_stack_fffffffffffffe90;
  undefined1 **ppuVar9;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  char *local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 local_58 [16];
  longlong local_48;
  
  local_110 = "gml_Script_anon@17245@DefineBuffs@OFFERINGSINIT";
  local_118 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_118;
  local_108 = 0x2c6;
  pcVar6 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_b8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_f4 = 0xffffff;
  local_100 = 0;
  local_14c = 0;
  local_158 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_108 = 0x2c8;
  puVar5 = &DAT_1419df7b0;
  if (param_4 < 2) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)param_5[1];
  }
  in_stack_fffffffffffffe90 = in_stack_fffffffffffffe90 & 0xffffffffffffff00;
  uVar7 = (ulonglong)pcVar6 & 0xffffffffffffff00;
  FUN_140e87440(puVar4,DAT_141a1f440,0x80000000,&local_e0,uVar7,in_stack_fffffffffffffe90);
  in_stack_fffffffffffffe90 = in_stack_fffffffffffffe90 & 0xffffffffffffff00;
  uVar7 = uVar7 & 0xffffffffffffff00;
  FUN_140e87440(&local_e0,DAT_141a57c50,0x80000000,&local_f0,uVar7,in_stack_fffffffffffffe90);
  uStack_15c = 10;
  local_168 = 0;
  iVar2 = FUN_140e851f0(&local_f0,&local_168,DAT_141955260,0);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if (iVar2 == 0) {
    local_108 = 0x2c8;
  }
  else {
    local_108 = 0x2c9;
    if (0 < param_4) {
      puVar5 = (undefined8 *)*param_5;
    }
    uStack_15c = *(undefined4 *)((longlong)puVar5 + 0xc);
    uStack_160 = *(undefined4 *)(puVar5 + 1);
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) == 0) {
      local_168 = *puVar5;
    }
    else {
      FUN_1400419b0(&local_168,puVar5);
    }
    uStack_12c = 7;
    local_138 = 2;
    FUN_140042560(&local_168,&local_138);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_148 = local_168;
    uStack_140 = uStack_160;
    uStack_13c = uStack_15c;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_148);
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_108 = 0x2cb;
    uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5948);
    uVar7 = uVar7 & 0xffffffffffffff00;
    FUN_140e87440(uVar3,DAT_1419f5d68,0x80000000,&local_100,uVar7,
                  in_stack_fffffffffffffe90 & 0xffffffffffffff00);
    uVar8 = (undefined4)(uVar7 >> 0x20);
    FUN_1400460e0(&local_100,&local_128);
    FUN_140e87930(uVar3,DAT_1419f5d68,0x80000000,&local_100);
    local_108 = 0x2cd;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    local_148 = CONCAT44(uRam0000000141dc6554,_DAT_141dc6550);
    uStack_140 = uRam0000000141dc6558;
    uStack_13c = uRam0000000141dc655c;
    if ((1 << (local_b8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_148);
    local_78 = local_b8;
    local_148 = CONCAT44(uRam0000000141dc6554,_DAT_141dc6550);
    uStack_140 = uRam0000000141dc6558;
    uStack_13c = uRam0000000141dc655c;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_148);
    local_70 = local_a8;
    local_148 = CONCAT44(uRam0000000141dd262c,_DAT_141dd2628);
    uStack_140 = uRam0000000141dd2630;
    uStack_13c = DAT_141dd2634;
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_148);
    uStack_13c = 0xf;
    local_148 = 0x100000000000051;
    local_138 = 0x51;
    uStack_134 = 0x1000000;
    uStack_130 = uStack_140;
    uStack_12c = 0xf;
    local_68 = local_98;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_138);
    local_60 = local_88;
    ppuVar9 = &local_78;
    uVar7 = CONCAT44(uVar8,DAT_141a0a7c8);
    uVar3 = FUN_140e634e0(local_res8,local_res10,&local_158,4,uVar7,ppuVar9);
    iVar2 = FUN_140e63cb0(local_58,&local_res8,&local_res10,uVar3);
    if (0 < iVar2) {
      do {
        uVar8 = (undefined4)(uVar7 >> 0x20);
        local_108 = 0x2cf;
        puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f440);
        FUN_140e609c0(local_res8);
        uStack_13c = 0xf;
        local_148 = 0x1000000000000ee;
        if (&local_148 != puVar5) {
          local_c8 = 0xee;
          uStack_c4 = 0x1000000;
          uStack_c0 = uStack_140;
          uStack_bc = 0xf;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          FUN_140041b80(puVar5,&local_c8);
        }
        FUN_140e60910(1);
        local_108 = 0x2d0;
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        local_158 = 0;
        local_150 = 0;
        local_14c = 5;
        puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1d8a0);
        local_c8 = _DAT_141dc6550;
        uStack_c4 = uRam0000000141dc6554;
        uStack_c0 = uRam0000000141dc6558;
        uStack_bc = uRam0000000141dc655c;
        if ((1 << (local_b8[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_b8);
        }
        FUN_140041b80(local_b8,&local_c8);
        local_78 = local_b8;
        FUN_140e609c0(local_res8);
        ppuVar9 = &local_78;
        uVar7 = CONCAT44(uVar8,DAT_141a0a0d8);
        puVar4 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_158,1,uVar7,ppuVar9);
        uStack_15c = *(undefined4 *)((longlong)puVar4 + 0xc);
        uStack_160 = *(undefined4 *)(puVar4 + 1);
        if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) == 0) {
          local_168 = *puVar4;
        }
        else {
          FUN_1400419b0(&local_168,puVar4);
        }
        uStack_12c = 7;
        local_138 = 2;
        FUN_140042560(&local_168,&local_138);
        if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        if (&local_168 != puVar5) {
          local_c8 = (undefined4)local_168;
          uStack_c4 = local_168._4_4_;
          uStack_c0 = uStack_160;
          uStack_bc = uStack_15c;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          FUN_140041b80(puVar5,&local_c8);
        }
        if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        FUN_140e60910(1);
        cVar1 = FUN_140e643f0(local_58,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(local_58,&local_res8,&local_res10);
    DAT_141a67c38 = 1;
    FUN_140e87440(&local_e0,DAT_141a57c50,0x80000000,&local_f0,uVar7 & 0xffffffffffffff00,
                  (ulonglong)ppuVar9 & 0xffffffffffffff00);
    DAT_141a67c38 = 0;
    DAT_141a72aac = 0;
    if (local_48 != 0) {
      FUN_140e4cd60();
      local_48 = 0;
    }
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_118;
  return param_3;
}

