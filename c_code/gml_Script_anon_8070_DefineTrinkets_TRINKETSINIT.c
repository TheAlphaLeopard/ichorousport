// gml_Script_anon_8070_DefineTrinkets_TRINKETSINIT @ 0x1405e8150

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_8070_DefineTrinkets_TRINKETSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  undefined1 **ppuVar6;
  longlong *plVar7;
  undefined4 uVar9;
  ulonglong uVar8;
  ulonglong in_stack_fffffffffffffe40;
  ulonglong uVar10;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined8 local_190;
  undefined4 local_184;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  char *local_150;
  undefined4 local_148;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 local_68 [16];
  longlong local_58;
  
  local_198 = 0;
  local_150 = "gml_Script_anon@7572@DefineTrinkets@TRINKETSINIT";
  local_158 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_158;
  local_148 = 0x117;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  _eh_vector_constructor_iterator_(local_c8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_184 = 0xffffff;
  local_190 = 0;
  uStack_dc = 0xffffff;
  local_e8 = 0;
  uStack_16c = 0xffffff;
  local_178 = 0;
  uStack_ec = 0xffffff;
  local_f8 = 0;
  uStack_fc = 0xffffff;
  local_108 = 0;
  uStack_10c = 0xffffff;
  local_118 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_19c = 0;
  local_1a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_148 = 0x118;
  uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5948);
  uStack_1b0._4_4_ = 0xd;
  local_1b8 = 0;
  local_168 = 0;
  uStack_160 = (undefined4)uStack_1b0;
  uStack_15c = 0xd;
  if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  FUN_140041b80(&local_190,&local_168);
  FUN_140e87930(uVar3,DAT_1419ffde8,0x80000000,&local_190);
  local_148 = 0x119;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  local_1b8 = CONCAT44(uRam00000001419e6a24,_DAT_1419e6a20);
  uStack_1b0 = CONCAT44(uRam00000001419e6a2c,uRam00000001419e6a28);
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_1b8);
  local_88 = local_c8;
  ppuVar6 = &local_88;
  uVar3 = gml_Script_choose_weighted(local_res8,local_res10,&local_1a8,1,ppuVar6);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_148 = 0x119;
  }
  else {
    local_148 = 0x11b;
    local_1b8 = 0x3ff0000000000000;
    uVar9 = (undefined4)uStack_1b0;
    uStack_1b0 = CONCAT44(0xd,uVar9);
    local_168 = 0x3ff0000000000000;
    _uStack_160 = CONCAT44(0xd,uVar9);
    if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_190);
    }
    FUN_140041b80(&local_190,&local_168);
    uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5948);
    FUN_140e87930(uVar3,DAT_1419ffde8,0x80000000,&local_190);
    local_148 = 0x11d;
    if (param_4 < 1) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)*param_5;
    }
    FUN_140e87440(puVar4,DAT_141a1f440,0x80000000,&local_e8,(ulonglong)ppuVar6 & 0xffffffffffffff00,
                  in_stack_fffffffffffffe40 & 0xffffffffffffff00);
    local_1b8 = local_e8;
    uStack_1b0 = CONCAT44(uStack_dc,uStack_e0);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_1b8);
    local_148 = 0x11e;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
    FUN_140e87170(&local_178,DAT_1419fe0e8,0x80000000,&local_f8,local_res8,local_res10);
    plVar7 = local_res8;
    FUN_140e87170(&local_178,DAT_1419fe158,0x80000000,&local_108,local_res8,local_res10);
    uVar9 = (undefined4)((ulonglong)plVar7 >> 0x20);
    local_1b8 = local_f8;
    uStack_1b0 = CONCAT44(uStack_ec,uStack_f0);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_1b8);
    local_88 = local_c8;
    local_1b8 = local_108;
    uStack_1b0 = CONCAT44(uStack_fc,uStack_100);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_1b8);
    local_80 = local_b8;
    local_1b8 = CONCAT44(uRam0000000141dd4d7c,_DAT_141dd4d78);
    uStack_1b0 = CONCAT44(DAT_141dd4d84,uRam0000000141dd4d80);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_1b8);
    local_78 = local_a8;
    uStack_1b0 = CONCAT44(0xf,(undefined4)uStack_1b0);
    local_1b8 = 0x1000000000000a0;
    local_168 = 0x1000000000000a0;
    uStack_160 = (undefined4)uStack_1b0;
    uStack_15c = 0xf;
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_168);
    local_70 = local_98;
    ppuVar6 = &local_88;
    uVar8 = CONCAT44(uVar9,DAT_141a0a7c8);
    uVar3 = FUN_140e634e0(local_res8,local_res10,&local_1a8,4,uVar8,ppuVar6);
    iVar2 = FUN_140e63cb0(local_68,&local_res8,&local_res10,uVar3);
    if (0 < iVar2) {
      do {
        local_148 = 0x120;
        puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f440);
        FUN_140e609c0(local_res8);
        if (&local_178 != puVar4) {
          local_d8 = (undefined4)local_178;
          uStack_d4 = local_178._4_4_;
          uStack_d0 = uStack_170;
          uStack_cc = uStack_16c;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar4);
          }
          FUN_140041b80(puVar4,&local_d8);
        }
        FUN_140e60910(1);
        local_148 = 0x121;
        puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f0d0);
        if (param_4 < 1) {
          puVar5 = &DAT_1419df7b0;
        }
        else {
          puVar5 = (undefined8 *)*param_5;
        }
        uVar10 = (ulonglong)ppuVar6 & 0xffffffffffffff00;
        uVar8 = uVar8 & 0xffffffffffffff00;
        FUN_140e87440(puVar5,DAT_141a1f4e0,0x80000000,&local_118,uVar8,uVar10);
        FUN_140e609c0(local_res8);
        if (&local_118 != puVar4) {
          local_d8 = (undefined4)local_118;
          uStack_d4 = local_118._4_4_;
          uStack_d0 = uStack_110;
          uStack_cc = uStack_10c;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar4);
          }
          FUN_140041b80(puVar4,&local_d8);
        }
        FUN_140e60910(1);
        local_148 = 0x122;
        puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a7d8);
        uStack_15c = 0xf;
        local_168 = 0x1000000000000ee;
        ppuVar6 = (undefined1 **)(uVar10 & 0xffffffffffffff00);
        uVar8 = uVar8 & 0xffffffffffffff00;
        FUN_140e87440(&local_168,DAT_141a0a7d8,0x80000000,&local_128,uVar8,ppuVar6);
        if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        FUN_140e609c0(local_res8);
        uStack_12c = local_11c;
        uStack_130 = local_120;
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) == 0) {
          local_138 = local_128;
        }
        else {
          FUN_1400419b0(&local_138,&local_128);
        }
        local_198 = 1;
        uStack_1b0 = uStack_1b0 & 0xffffffff;
        local_1b8 = 0x3fe8000000000000;
        FUN_140042560(&local_138,&local_1b8);
        if ((1 << ((byte)(uStack_1b0 >> 0x20) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        if (&local_138 != puVar4) {
          local_d8 = (undefined4)local_138;
          uStack_d4 = local_138._4_4_;
          uStack_d0 = uStack_130;
          uStack_cc = uStack_12c;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar4);
          }
          FUN_140041b80(puVar4,&local_d8);
        }
        local_198 = 0;
        if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        FUN_140e60910(1);
        cVar1 = FUN_140e643f0(local_68,&local_res8,&local_res10);
      } while (cVar1 != '\0');
      param_3 = local_res18;
    }
    FUN_140e63970(local_68,&local_res8,&local_res10);
    if (local_58 != 0) {
      FUN_140e4cd60();
      local_58 = 0;
    }
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  _eh_vector_destructor_iterator_(local_c8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_158;
  return param_3;
}

