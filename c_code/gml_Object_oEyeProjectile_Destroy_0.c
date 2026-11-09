// gml_Object_oEyeProjectile_Destroy_0 @ 0x140aca800

void gml_Object_oEyeProjectile_Destroy_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  longlong *local_res8;
  undefined8 local_res10;
  code *pcVar7;
  ulonglong uVar8;
  undefined1 **ppuVar9;
  undefined4 uVar10;
  ulonglong in_stack_fffffffffffffe00;
  uint local_1f8;
  uint uStack_1f4;
  uint uStack_1f0;
  uint uStack_1ec;
  longlong *local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_19c;
  undefined8 local_198;
  uint uStack_190;
  uint uStack_18c;
  undefined8 local_188;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  char *local_160;
  undefined4 local_158;
  longlong *local_150;
  undefined4 local_144;
  undefined1 local_138 [12];
  byte local_12c;
  undefined1 local_128 [12];
  byte local_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  uint local_e8 [3];
  byte local_dc;
  uint local_d8 [3];
  byte local_cc;
  uint local_c8 [3];
  byte local_bc;
  uint local_b8 [3];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  uint *local_70;
  uint *local_68;
  uint *local_60;
  uint *local_58;
  undefined1 *local_50;
  undefined1 local_48 [16];
  longlong local_38;
  
  local_160 = "gml_Object_oExtraSlash_Step_0";
  local_158 = 0;
  local_168 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_168;
  pcVar7 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_138,0x10,10,FUN_1400424d0,FUN_140041b30);
  uStack_16c = 0xffffff;
  local_178 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  uStack_18c = 0xffffff;
  local_198 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_158 = 3;
  uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f440);
  iVar2 = FUN_140e63cb0(local_48,&local_res8,&local_res10,uVar3);
  if (0 < iVar2) {
    do {
      local_158 = 5;
      local_144 = 6;
      local_150 = local_res8;
      in_stack_fffffffffffffe00 = in_stack_fffffffffffffe00 & 0xffffffffffffff00;
      uVar8 = (ulonglong)pcVar7 & 0xffffffffffffff00;
      FUN_140e87440(&local_150,DAT_1419fe0e8,0x80000000,&local_178,uVar8,in_stack_fffffffffffffe00);
      if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_150);
      }
      local_1f8 = (uint)local_178;
      uStack_1f4 = local_178._4_4_;
      uStack_1f0 = uStack_170;
      uStack_1ec = uStack_16c;
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140041b80(&local_188,&local_1f8);
      FUN_140e86fa0(local_res10,DAT_1419fe0e8,0x80000000,&local_188);
      local_158 = 6;
      uStack_1dc = 6;
      local_1e8 = local_res8;
      in_stack_fffffffffffffe00 = in_stack_fffffffffffffe00 & 0xffffffffffffff00;
      pcVar7 = (code *)(uVar8 & 0xffffffffffffff00);
      FUN_140e87440(&local_1e8,DAT_1419fe158,0x80000000,&local_198,pcVar7,in_stack_fffffffffffffe00)
      ;
      if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      local_1f8 = (uint)local_198;
      uStack_1f4 = local_198._4_4_;
      uStack_1f0 = uStack_190;
      uStack_1ec = uStack_18c;
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      FUN_140041b80(&local_1a8,&local_1f8);
      FUN_140e86fa0(local_res10,DAT_1419fe158,0x80000000,&local_1a8);
      cVar1 = FUN_140e643f0(local_48,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_48,&local_res8,&local_res10);
  local_158 = 10;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  local_1f8 = (uint)DAT_1419df7b0;
  uStack_1f4 = DAT_1419df7b0._4_4_;
  uStack_1f0 = DAT_1419df7b8;
  uStack_1ec = DAT_1419df7bc;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_1f8);
  local_98 = local_138;
  local_1f8 = (uint)DAT_1419df7b0;
  uStack_1f4 = DAT_1419df7b0._4_4_;
  uStack_1f0 = DAT_1419df7b8;
  uStack_1ec = DAT_1419df7bc;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_1f8);
  ppuVar9 = &local_98;
  local_90 = local_128;
  uVar3 = gml_Script_animcurve_lerp(local_res8,local_res10,&local_1b8,2,ppuVar9);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    local_158 = 0xc;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_1d8 = 0;
    local_1d0 = 0;
    local_1cc = 5;
    puVar4 = (uint *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f440);
    puVar5 = (uint *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f0d0);
    puVar6 = (uint *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a7d8);
    uStack_1dc = 6;
    local_1e8 = local_res8;
    in_stack_fffffffffffffe00 = in_stack_fffffffffffffe00 & 0xffffffffffffff00;
    uVar8 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
    FUN_140e87440(&local_1e8,DAT_1419fe0e8,0x80000000,&local_178,uVar8,in_stack_fffffffffffffe00);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    uStack_1dc = 6;
    local_1e8 = local_res8;
    uVar8 = uVar8 & 0xffffffffffffff00;
    FUN_140e87440(&local_1e8,DAT_1419fe158,0x80000000,&local_198,uVar8,
                  in_stack_fffffffffffffe00 & 0xffffffffffffff00);
    uVar10 = (undefined4)(uVar8 >> 0x20);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1f8 = DAT_141a575a0 & 0xffffff;
    uStack_1f4 = (int)(DAT_141a575a0 | 0x5000000) >> 0x18 & 0xff;
    if (uStack_1f4 == 0xf) {
      uStack_1f4 = 0x4000004;
    }
    else {
      uStack_1f4 = uStack_1f4 | 0x1000000;
    }
    uStack_1dc = 0xf;
    local_1e8 = (longlong *)(CONCAT44(uStack_1f4,DAT_141a575a0) & 0xffffffff00ffffff);
    uStack_1f0 = uStack_1e0;
    uStack_1ec = 0xf;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_1f8);
    local_88 = local_118;
    local_1f8 = (uint)local_178;
    uStack_1f4 = local_178._4_4_;
    uStack_1f0 = uStack_170;
    uStack_1ec = uStack_16c;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_1f8);
    local_80 = local_108;
    local_1f8 = (uint)local_198;
    uStack_1f4 = local_198._4_4_;
    uStack_1f0 = uStack_190;
    uStack_1ec = uStack_18c;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_1f8);
    local_78 = local_f8;
    if (puVar5 != local_e8) {
      local_1f8 = *puVar5;
      uStack_1f4 = puVar5[1];
      uStack_1f0 = puVar5[2];
      uStack_1ec = puVar5[3];
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_e8);
      }
      FUN_140041b80(local_e8,&local_1f8);
    }
    local_70 = local_e8;
    if (puVar4 != local_d8) {
      local_1f8 = *puVar4;
      uStack_1f4 = puVar4[1];
      uStack_1f0 = puVar4[2];
      uStack_1ec = puVar4[3];
      if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_d8);
      }
      FUN_140041b80(local_d8,&local_1f8);
    }
    local_68 = local_d8;
    if (puVar6 != local_c8) {
      local_1f8 = *puVar6;
      uStack_1f4 = puVar6[1];
      uStack_1f0 = puVar6[2];
      uStack_1ec = puVar6[3];
      if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_c8);
      }
      FUN_140041b80(local_c8,&local_1f8);
    }
    local_60 = local_c8;
    puVar4 = (uint *)FUN_140e634e0(local_res8,local_res10,&local_1d8,6,
                                   CONCAT44(uVar10,DAT_1419fd6d8),&local_88);
    if (puVar4 != local_b8) {
      local_1f8 = *puVar4;
      uStack_1f4 = puVar4[1];
      uStack_1f0 = puVar4[2];
      uStack_1ec = puVar4[3];
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_b8);
      }
      FUN_140041b80(local_b8,&local_1f8);
    }
    local_58 = local_b8;
    local_1f8 = (uint)DAT_1419df7b0;
    uStack_1f4 = DAT_1419df7b0._4_4_;
    uStack_1f0 = DAT_1419df7b8;
    uStack_1ec = DAT_1419df7bc;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_1f8);
    local_50 = local_a8;
    gml_Script_draw_line_sprite(local_res8,local_res10,&local_1c8,2,&local_58);
    local_158 = 0xd;
    FUN_140edd0e0(local_res8,local_res10,0,0);
  }
  if (local_38 != 0) {
    FUN_140e4cd60();
    local_38 = 0;
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  _eh_vector_destructor_iterator_(local_138,0x10,10,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_168;
  return;
}

