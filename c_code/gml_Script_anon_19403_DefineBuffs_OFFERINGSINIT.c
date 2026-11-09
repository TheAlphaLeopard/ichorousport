// gml_Script_anon_19403_DefineBuffs_OFFERINGSINIT @ 0x1403d8bb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_19403_DefineBuffs_OFFERINGSINIT
          (longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint *puVar5;
  undefined4 uVar10;
  ulonglong uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  uint **ppuVar9;
  ulonglong uVar11;
  undefined8 **ppuVar12;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined8 local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  uint local_238;
  uint uStack_234;
  uint uStack_230;
  uint uStack_22c;
  undefined8 local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 local_20c;
  undefined8 local_208;
  undefined4 local_1fc;
  uint local_1f8 [3];
  undefined4 local_1ec;
  uint local_1e8 [3];
  undefined4 local_1dc;
  undefined8 local_1d8;
  char *local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined8 local_1a0;
  undefined4 local_194;
  uint local_188 [4];
  undefined8 local_178 [2];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  uint local_148 [3];
  byte local_13c;
  undefined1 local_138 [16];
  undefined8 local_128 [2];
  uint local_118 [4];
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  uint *local_e8;
  undefined8 *local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  uint *local_c8;
  undefined1 *local_c0;
  undefined8 *local_b8;
  uint *local_b0;
  undefined1 *local_a8;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_1d0 = "gml_Script_anon@18385@DefineBuffs@OFFERINGSINIT";
  local_1d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1d8;
  local_1c8 = 0x2fa;
  uVar10 = 1;
  _eh_vector_constructor_iterator_(local_188,0x10,9,FUN_1400424d0,FUN_140041b30);
  local_1ec = 0xffffff;
  local_1f8[0] = 0;
  local_1f8[1] = 0;
  local_194 = 0xffffff;
  local_1a0 = 0;
  uStack_3c = 0xffffff;
  local_48 = 0;
  local_1a4 = 0xffffff;
  local_1b0 = 0;
  uStack_4c = 0xffffff;
  local_58 = 0;
  local_1b4 = 0xffffff;
  local_1c0 = 0;
  local_1dc = 0xffffff;
  local_1e8[0] = 0;
  local_1e8[1] = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  uStack_6c = 0xffffff;
  local_78 = 0;
  uStack_7c = 0xffffff;
  local_88 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_24c = 0;
  local_258 = 0;
  local_20c = 0;
  local_218 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1c8 = 0x2fc;
  uVar11 = 0;
  uVar6 = CONCAT44(uVar10,DAT_1419ef5d8);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_258,0,uVar6,0);
  if ((uint *)puVar3 != local_1f8) {
    local_228 = *puVar3;
    uStack_220 = *(undefined4 *)(puVar3 + 1);
    uStack_21c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1f8);
    }
    FUN_140041b80(local_1f8,&local_228);
  }
  local_1c8 = 0x2fd;
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_258 = 0;
  local_250 = 0;
  local_24c = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  FUN_140e87440(uVar4,DAT_1419f5f98,0x80000000,&local_1a0,uVar6 & 0xffffffffffffff00,
                uVar11 & 0xffffffffffffff00);
  plVar7 = param_1;
  uVar6 = param_2;
  FUN_140e87170(&local_1a0,DAT_1419fe0e8,0x80000000,&local_48,param_1,param_2);
  FUN_140e87440(uVar4,DAT_1419f5f98,0x80000000,&local_1a0,(ulonglong)plVar7 & 0xffffffffffffff00,
                uVar6 & 0xffffffffffffff00);
  FUN_140e87170(&local_1a0,DAT_1419fe158,0x80000000,&local_1b0,param_1,param_2);
  uStack_23c = 0xf;
  local_248 = 0x1000000000000ee;
  FUN_140e87170(&local_248,DAT_1419fe0e8,0x80000000,&local_58,param_1,param_2);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  uStack_23c = 0xf;
  local_248 = 0x1000000000000ee;
  FUN_140e87170(&local_248,DAT_1419fe158,0x80000000,&local_1c0,param_1,param_2);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_228 = local_48;
  uStack_220 = uStack_40;
  uStack_21c = uStack_3c;
  if ((1 << ((byte)local_188[3] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_188);
  }
  FUN_140041b80(local_188,&local_228);
  uStack_23c = local_1a4;
  uStack_240 = local_1a8;
  local_e8 = local_188;
  if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) == 0) {
    local_248 = local_1b0;
  }
  else {
    FUN_1400419b0(&local_248,&local_1b0);
  }
  local_1fc = 7;
  local_208 = CONCAT44(local_208._4_4_,2);
  FUN_1400462a0(&local_248,&local_208);
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  local_228 = local_248;
  uStack_220 = uStack_240;
  uStack_21c = uStack_23c;
  if ((1 << ((byte)local_178[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_178);
  }
  FUN_140041b80(local_178,&local_228);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_e0 = local_178;
  local_228 = local_58;
  uStack_220 = uStack_50;
  uStack_21c = uStack_4c;
  if ((1 << (local_168[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_168);
  }
  FUN_140041b80(local_168,&local_228);
  local_d8 = local_168;
  uStack_23c = local_1b4;
  uStack_240 = local_1b8;
  if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) == 0) {
    local_248 = local_1c0;
  }
  else {
    FUN_1400419b0(&local_248,&local_1c0);
  }
  local_1fc = 7;
  local_208 = CONCAT44(local_208._4_4_,2);
  FUN_1400462a0(&local_248,&local_208);
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  local_228 = local_248;
  uStack_220 = uStack_240;
  uStack_21c = uStack_23c;
  if ((1 << (local_158[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_158);
  }
  FUN_140041b80(local_158,&local_228);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_d0 = local_158;
  uStack_ec = 0xf;
  local_f8 = 0x10000000000009d;
  local_228 = 0x10000000000009d;
  uStack_220 = uStack_f0;
  uStack_21c = 0xf;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_148);
  }
  FUN_140041b80(local_148,&local_228);
  local_c8 = local_148;
  local_228 = CONCAT44(uRam00000001419e4914,_DAT_1419e4910);
  uStack_220 = uRam00000001419e4918;
  uStack_21c = uRam00000001419e491c;
  if ((1 << (local_138[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_228);
  local_c0 = local_138;
  local_b8 = (undefined8 *)local_1f8;
  ppuVar9 = &local_e8;
  gml_Script_collision_real(param_1,param_2,&local_258,7,ppuVar9);
  local_1c8 = 0x2fe;
  while( true ) {
    uVar10 = (undefined4)((ulonglong)ppuVar9 >> 0x20);
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    local_258 = 0;
    local_250 = 0;
    local_24c = 5;
    local_e8 = local_1f8;
    uVar8 = CONCAT44(uVar10,DAT_1419f58d8);
    uVar4 = FUN_140e634e0(param_1,param_2,&local_258,1,uVar8,&local_e8);
    uVar10 = (undefined4)((ulonglong)uVar8 >> 0x20);
    cVar1 = FUN_140e491e0(uVar4);
    if (cVar1 != '\0') break;
    local_1c8 = 0x300;
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_218 = 0;
    local_210 = 0;
    local_20c = 5;
    local_e0 = (undefined8 *)local_1f8;
    local_238 = _DAT_141dc6550;
    uStack_234 = uRam0000000141dc6554;
    uStack_230 = uRam0000000141dc6558;
    uStack_22c = uRam0000000141dc655c;
    if ((1 << (local_168[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_238);
    local_d8 = local_168;
    uVar4 = CONCAT44(uVar10,DAT_1419f5a78);
    puVar5 = (uint *)FUN_140e634e0(param_1,param_2,&local_218,2,uVar4,&local_e0);
    uVar10 = (undefined4)((ulonglong)uVar4 >> 0x20);
    if (puVar5 != local_1e8) {
      local_238 = *puVar5;
      uStack_234 = puVar5[1];
      uStack_230 = puVar5[2];
      uStack_22c = puVar5[3];
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1e8);
      }
      FUN_140041b80(local_1e8,&local_238);
    }
    local_1c8 = 0x301;
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    local_258 = 0;
    local_250 = 0;
    local_24c = 5;
    local_e8 = local_1f8;
    local_238 = _DAT_141dc6550;
    uStack_234 = uRam0000000141dc6554;
    uStack_230 = uRam0000000141dc6558;
    uStack_22c = uRam0000000141dc655c;
    if ((1 << ((byte)local_178[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_178);
    }
    FUN_140041b80(local_178,&local_238);
    local_e0 = local_178;
    ppuVar12 = (undefined8 **)&local_e8;
    uVar6 = CONCAT44(uVar10,DAT_1419f5938);
    FUN_140e634e0(param_1,param_2,&local_258,2,uVar6,ppuVar12);
    local_1c8 = 0x303;
    ppuVar9 = (uint **)(uVar6 & 0xffffffffffffff00);
    FUN_140e87440(local_1e8,DAT_141a56cd0,0x80000000,&local_68,ppuVar9,
                  (ulonglong)ppuVar12 & 0xffffffffffffff00);
    local_1fc = 10;
    local_208 = 2;
    iVar2 = FUN_140e851f0(&local_68,&local_208,DAT_141955260,0);
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    if (iVar2 == 0) {
      local_1c8 = 0x303;
    }
    else {
      local_1c8 = 0x305;
      if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      local_258 = 0;
      local_250 = 0;
      local_24c = 5;
      if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      local_218 = 0;
      local_210 = 0;
      local_20c = 5;
      FUN_140e87170(local_1e8,DAT_1419fe0e8,0x80000000,&local_78,param_1,param_2);
      plVar7 = param_1;
      uVar6 = param_2;
      FUN_140e87170(local_1e8,DAT_1419fe158,0x80000000,&local_88,param_1,param_2);
      uStack_23c = 0xf;
      local_248 = 0x1000000000000ee;
      uVar11 = (ulonglong)plVar7 & 0xffffffffffffff00;
      FUN_140e87440(&local_248,DAT_141a0a7d8,0x80000000,&local_98,uVar11,uVar6 & 0xffffffffffffff00)
      ;
      uVar10 = (undefined4)(uVar11 >> 0x20);
      if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      local_238 = DAT_141a575a0 & 0xffffff;
      uStack_234 = (int)(DAT_141a575a0 | 0x5000000) >> 0x18 & 0xff;
      if (uStack_234 == 0xf) {
        uStack_234 = 0x4000004;
      }
      else {
        uStack_234 = uStack_234 | 0x1000000;
      }
      uStack_2c = 0xf;
      local_38 = CONCAT44(uStack_234,DAT_141a575a0) & 0xffffffff00ffffff;
      uStack_230 = uStack_30;
      uStack_22c = 0xf;
      if ((1 << ((byte)local_188[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_188);
      }
      FUN_140041b80(local_188,&local_238);
      local_238 = (uint)local_78;
      uStack_234 = local_78._4_4_;
      uStack_230 = uStack_70;
      uStack_22c = uStack_6c;
      local_e8 = local_188;
      if ((1 << ((byte)local_178[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_178);
      }
      FUN_140041b80(local_178,&local_238);
      local_e0 = local_178;
      local_238 = (uint)local_88;
      uStack_234 = local_88._4_4_;
      uStack_230 = uStack_80;
      uStack_22c = uStack_7c;
      if ((1 << (local_168[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_168);
      }
      FUN_140041b80(local_168,&local_238);
      local_d8 = local_168;
      uStack_21c = 0xf;
      local_228 = 0x1000000000000ee;
      local_238 = 0xee;
      uStack_234 = 0x1000000;
      uStack_230 = uStack_220;
      uStack_22c = 0xf;
      if ((1 << (local_158[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_158);
      }
      FUN_140041b80(local_158,&local_238);
      local_d0 = local_158;
      local_c8 = local_1e8;
      local_238 = (uint)local_98;
      uStack_234 = local_98._4_4_;
      uStack_230 = uStack_90;
      uStack_22c = uStack_8c;
      if ((1 << (local_138[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_138);
      }
      FUN_140041b80(local_138,&local_238);
      local_c0 = local_138;
      FUN_140e645a0(&local_f8,gml_Script_anon_19236_DefineBuffs_OFFERINGSINIT,param_1);
      local_238 = (uint)local_f8;
      uStack_234 = local_f8._4_4_;
      uStack_230 = uStack_f0;
      uStack_22c = uStack_ec;
      if ((1 << ((byte)local_128[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_128);
      }
      FUN_140041b80(local_128,&local_238);
      if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      local_b8 = local_128;
      puVar5 = (uint *)FUN_140e634e0(param_1,param_2,&local_218,7,CONCAT44(uVar10,DAT_1419fd6d8),
                                     &local_e8);
      if (puVar5 != local_118) {
        local_238 = *puVar5;
        uStack_234 = puVar5[1];
        uStack_230 = puVar5[2];
        uStack_22c = puVar5[3];
        if ((1 << ((byte)local_118[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_118);
        }
        FUN_140041b80(local_118,&local_238);
      }
      local_b0 = local_118;
      local_238 = (uint)DAT_1419df7b0;
      uStack_234 = DAT_1419df7b0._4_4_;
      uStack_230 = DAT_1419df7b8;
      uStack_22c = DAT_1419df7bc;
      if ((1 << (local_108[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_238);
      local_a8 = local_108;
      ppuVar9 = &local_b0;
      gml_Script_draw_line_sprite(param_1,param_2,&local_258,2,ppuVar9);
    }
  }
  local_1c8 = 0x317;
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_258 = 0;
  local_250 = 0;
  local_24c = 5;
  local_e8 = local_1f8;
  FUN_140e634e0(param_1,param_2,&local_258,1,CONCAT44(uVar10,DAT_1419f6038),&local_e8);
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1e8);
  }
  if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c0);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b0);
  }
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a0);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1f8);
  }
  _eh_vector_destructor_iterator_(local_188,0x10,9,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1d8;
  return param_3;
}

