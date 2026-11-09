// gml_Script_anon_13741_gml_Object_oEntity_Create_0 @ 0x140ab98d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_13741_gml_Object_oEntity_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  uint *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined4 uVar11;
  ulonglong uVar8;
  undefined8 uVar9;
  uint **ppuVar10;
  ulonglong uVar12;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 local_20c;
  uint local_208;
  uint uStack_204;
  uint uStack_200;
  uint uStack_1fc;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  longlong *local_1e8;
  undefined4 local_1dc;
  undefined8 local_1d8;
  char *local_1d0;
  undefined4 local_1c8;
  uint local_1c0 [3];
  undefined4 local_1b4;
  longlong *local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  uint local_188 [3];
  undefined4 local_17c;
  uint local_178 [3];
  undefined4 local_16c;
  undefined8 local_168;
  uint uStack_160;
  uint uStack_15c;
  uint *local_158;
  uint *local_150;
  undefined1 *local_148;
  uint *local_140;
  uint *local_138;
  uint *local_130;
  uint local_128 [4];
  uint local_118 [4];
  undefined1 local_108 [16];
  uint local_f8 [4];
  uint local_e8 [3];
  byte local_dc;
  uint local_d8 [4];
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  uint uStack_90;
  uint uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  longlong *local_78;
  undefined4 local_6c;
  uint local_68 [2];
  undefined8 *local_60;
  ulonglong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_1d0 = "gml_Script_anon@13129@gml_Object_oEntity_Create_0";
  local_1d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1d8;
  local_1c8 = 0x264;
  FUN_140041df0(local_68,param_4,1,param_5);
  uVar11 = 1;
  _eh_vector_constructor_iterator_(local_128,0x10,6,FUN_1400424d0,FUN_140041b30);
  uStack_15c = 0xffffff;
  local_168 = 0;
  local_1b4 = 0xffffff;
  local_1c0[0] = 0;
  local_1c0[1] = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  local_16c = 0xffffff;
  local_178[0] = 0;
  local_178[1] = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_17c = 0xffffff;
  local_188[0] = 0;
  local_188[1] = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_20c = 0;
  local_218 = 0;
  local_18c = 0;
  local_198 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1c8 = 0x264;
  puVar6 = &DAT_1419df7b0;
  uVar7 = (ulonglong)local_68[0];
  if ((int)local_68[0] < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*local_60;
  }
  iVar2 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_1c8 = 0x264;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a062e8);
    if (0 < (int)local_68[0]) {
      puVar6 = (undefined8 *)*local_60;
    }
    if (puVar3 != puVar6) {
      local_1f8 = *puVar3;
      uStack_1f0 = puVar3[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_1f8);
    }
  }
  local_1c8 = 0x266;
  uStack_1a0 = CONCAT44(0xd,(undefined4)uStack_1a0);
  local_1a8 = (longlong *)0x0;
  local_1f8 = 0;
  uStack_1f0 = uStack_1a0;
  FUN_140041b80(&local_168,&local_1f8);
  local_1c8 = 0x267;
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_218 = 0;
  local_210 = 0;
  local_20c = 5;
  uVar12 = 0;
  uVar8 = CONCAT44(uVar11,DAT_1419ef5d8);
  puVar4 = (uint *)FUN_140e634e0(param_1,param_2,&local_218,0,uVar8,0);
  if (puVar4 != local_1c0) {
    local_1f8 = *(undefined8 *)puVar4;
    uStack_1f0 = *(undefined8 *)(puVar4 + 2);
    if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1c0);
    }
    FUN_140041b80(local_1c0,&local_1f8);
  }
  local_1c8 = 0x268;
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_218 = 0;
  local_210 = 0;
  local_20c = 5;
  local_1dc = 6;
  uVar12 = uVar12 & 0xffffffffffffff00;
  uVar8 = uVar8 & 0xffffffffffffff00;
  local_1e8 = param_1;
  FUN_140e87440(&local_1e8,DAT_1419fe0e8,0x80000000,&local_a8,uVar8,uVar12);
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1dc = 6;
  uVar8 = uVar8 & 0xffffffffffffff00;
  local_1e8 = param_1;
  FUN_140e87440(&local_1e8,DAT_1419fe158,0x80000000,&local_b8,uVar8,uVar12 & 0xffffffffffffff00);
  uVar11 = (undefined4)(uVar8 >> 0x20);
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1f8 = local_a8;
  uStack_1f0 = CONCAT44(uStack_9c,uStack_a0);
  if ((1 << ((byte)local_128[3] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_1f8);
  local_158 = local_128;
  local_1f8 = local_b8;
  uStack_1f0 = CONCAT44(uStack_ac,uStack_b0);
  if ((1 << ((byte)local_118[3] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_1f8);
  local_150 = local_118;
  uStack_1a0._4_4_ = 0xf;
  local_1a8 = (longlong *)0x10000000000009d;
  local_1f8 = 0x10000000000009d;
  uStack_1f0 = CONCAT44(0xf,(undefined4)uStack_1a0);
  if ((1 << (local_108[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_1f8);
  local_148 = local_108;
  local_140 = local_1c0;
  local_1f8 = CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
  uStack_1f0 = CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_1f8);
  local_138 = local_e8;
  ppuVar10 = (uint **)CONCAT44(uVar11,DAT_141a56b80);
  FUN_140e634e0(param_1,param_2,&local_218,5,ppuVar10,&local_158);
  local_1c8 = 0x269;
  do {
    while( true ) {
      uVar11 = (undefined4)((ulonglong)ppuVar10 >> 0x20);
      if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      local_218 = 0;
      local_210 = 0;
      local_20c = 5;
      local_158 = local_1c0;
      uVar9 = CONCAT44(uVar11,DAT_1419f58d8);
      uVar5 = FUN_140e634e0(param_1,param_2,&local_218,1,uVar9,&local_158);
      uVar11 = (undefined4)((ulonglong)uVar9 >> 0x20);
      cVar1 = FUN_140e491e0(uVar5);
      if (cVar1 != '\0') {
        local_1c8 = 0x275;
        if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        local_218 = 0;
        local_210 = 0;
        local_20c = 5;
        local_158 = local_1c0;
        FUN_140e634e0(param_1,param_2,&local_218,1,CONCAT44(uVar11,DAT_1419f6038),&local_158);
        local_1c8 = 0x277;
        if (&local_168 != param_3) {
          local_208 = (uint)local_168;
          uStack_204 = local_168._4_4_;
          uStack_200 = uStack_160;
          uStack_1fc = uStack_15c;
          if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(param_3);
          }
          FUN_140041b80(param_3,&local_208);
        }
        if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c8);
        }
        if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_188);
        }
        if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_98);
        }
        if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_88);
        }
        if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_178);
        }
        if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_b8);
        }
        if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_a8);
        }
        if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1c0);
        }
        if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        _eh_vector_destructor_iterator_(local_128,0x10,6,FUN_140041b30);
        if (0 < (int)local_68[0]) {
          puVar6 = local_60;
          do {
            puVar3 = (undefined8 *)*puVar6;
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar3);
            }
            *puVar3 = 0;
            *(undefined4 *)(puVar3 + 1) = 0;
            *(undefined4 *)((longlong)puVar3 + 0xc) = 5;
            puVar6 = puVar6 + 1;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        FUN_140e4cd60(local_60);
        DAT_141dc7a50 = (undefined8 *)local_1d8;
        return param_3;
      }
      local_1c8 = 0x26b;
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      local_198 = 0;
      local_190 = 0;
      local_18c = 5;
      local_150 = local_1c0;
      local_208 = _DAT_141dc6ff0;
      uStack_204 = uRam0000000141dc6ff4;
      uStack_200 = uRam0000000141dc6ff8;
      uStack_1fc = uRam0000000141dc6ffc;
      if ((1 << (local_108[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_208);
      local_148 = local_108;
      uVar5 = CONCAT44(uVar11,DAT_1419f5a78);
      puVar4 = (uint *)FUN_140e634e0(param_1,param_2,&local_198,2,uVar5,&local_150);
      uVar11 = (undefined4)((ulonglong)uVar5 >> 0x20);
      if (puVar4 != local_178) {
        local_208 = *puVar4;
        uStack_204 = puVar4[1];
        uStack_200 = puVar4[2];
        uStack_1fc = puVar4[3];
        if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_178);
        }
        FUN_140041b80(local_178,&local_208);
      }
      local_1c8 = 0x26c;
      if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      local_218 = 0;
      local_210 = 0;
      local_20c = 5;
      local_158 = local_1c0;
      local_208 = _DAT_141dc6ff0;
      uStack_204 = uRam0000000141dc6ff4;
      uStack_200 = uRam0000000141dc6ff8;
      uStack_1fc = uRam0000000141dc6ffc;
      if ((1 << ((byte)local_118[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_118);
      }
      FUN_140041b80(local_118,&local_208);
      local_150 = local_118;
      ppuVar10 = &local_158;
      uVar8 = CONCAT44(uVar11,DAT_1419f5938);
      FUN_140e634e0(param_1,param_2,&local_218,2,uVar8,ppuVar10);
      local_1c8 = 0x26e;
      uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a56cd0);
      uVar12 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
      ppuVar10 = (uint **)(uVar8 & 0xffffffffffffff00);
      FUN_140e87440(local_178,DAT_141a56cd0,0x80000000,&local_88,ppuVar10,uVar12);
      iVar2 = FUN_140e851f0(&local_88,uVar5,DAT_141955260,0);
      if (iVar2 != 0) break;
      local_1c8 = 0x26e;
    }
    local_1c8 = 0x270;
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_218 = 0;
    local_210 = 0;
    local_20c = 5;
    local_1dc = 6;
    uVar12 = uVar12 & 0xffffffffffffff00;
    uVar8 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
    local_1e8 = param_1;
    FUN_140e87440(&local_1e8,DAT_1419fe0e8,0x80000000,&local_a8,uVar8,uVar12);
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_6c = 6;
    uVar12 = uVar12 & 0xffffffffffffff00;
    uVar8 = uVar8 & 0xffffffffffffff00;
    local_78 = param_1;
    FUN_140e87440(&local_78,DAT_1419fe158,0x80000000,&local_b8,uVar8,uVar12);
    if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    uStack_1a0._4_4_ = 6;
    uVar8 = uVar8 & 0xffffffffffffff00;
    local_1a8 = param_1;
    FUN_140e87440(&local_1a8,DAT_141a0a828,0x80000000,&local_98,uVar8,uVar12 & 0xffffffffffffff00);
    uVar11 = (undefined4)(uVar8 >> 0x20);
    if ((1 << ((byte)uStack_1a0._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_208 = DAT_141a575a0 & 0xffffff;
    uStack_204 = (int)(DAT_141a575a0 | 0x5000000) >> 0x18 & 0xff;
    if (uStack_204 == 0xf) {
      uStack_204 = 0x4000004;
    }
    else {
      uStack_204 = uStack_204 | 0x1000000;
    }
    uStack_4c = 0xf;
    local_58 = CONCAT44(uStack_204,DAT_141a575a0) & 0xffffffff00ffffff;
    uStack_200 = uStack_50;
    uStack_1fc = 0xf;
    if ((1 << ((byte)local_128[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_208);
    local_158 = local_128;
    local_208 = (uint)local_a8;
    uStack_204 = local_a8._4_4_;
    uStack_200 = uStack_a0;
    uStack_1fc = uStack_9c;
    if ((1 << ((byte)local_118[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_208);
    local_150 = local_118;
    local_208 = (uint)local_b8;
    uStack_204 = local_b8._4_4_;
    uStack_200 = uStack_b0;
    uStack_1fc = uStack_ac;
    if ((1 << (local_108[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_208);
    local_148 = local_108;
    local_208 = (uint)local_98;
    uStack_204 = local_98._4_4_;
    uStack_200 = uStack_90;
    uStack_1fc = uStack_8c;
    if ((1 << ((byte)local_f8[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_208);
    local_140 = local_f8;
    local_138 = local_178;
    if ((int)local_68[0] < 1) {
      puVar4 = (uint *)&DAT_1419df7b0;
LAB_140aba269:
      local_208 = *puVar4;
      uStack_204 = puVar4[1];
      uStack_200 = puVar4[2];
      uStack_1fc = puVar4[3];
      if ((1 << ((byte)local_d8[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_d8);
      }
      FUN_140041b80(local_d8,&local_208);
    }
    else {
      puVar4 = (uint *)*local_60;
      if (puVar4 != local_d8) goto LAB_140aba269;
    }
    local_130 = local_d8;
    puVar4 = (uint *)FUN_140e634e0(param_1,param_2,&local_218,6,CONCAT44(uVar11,DAT_1419fd6d8),
                                   &local_158);
    if (puVar4 != local_188) {
      local_208 = *puVar4;
      uStack_204 = puVar4[1];
      uStack_200 = puVar4[2];
      uStack_1fc = puVar4[3];
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_188);
      }
      FUN_140041b80(local_188,&local_208);
    }
    local_1c8 = 0x271;
    local_48 = 0;
    uStack_44 = 0x3ff00000;
    uStack_3c = 0xd;
    local_208 = 0;
    uStack_204 = 0x3ff00000;
    uStack_200 = uStack_40;
    uStack_1fc = 0xd;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_208);
    FUN_140e87930(local_188,DAT_141a575d0,0x80000000,&local_c8);
    local_1c8 = 0x272;
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_218 = 0;
    local_210 = 0;
    local_20c = 5;
    local_158 = local_188;
    local_208 = (uint)DAT_1419df7b0;
    uStack_204 = DAT_1419df7b0._4_4_;
    uStack_200 = DAT_1419df7b8;
    uStack_1fc = DAT_1419df7bc;
    if ((1 << ((byte)local_118[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_208);
    local_150 = local_118;
    ppuVar10 = &local_158;
    gml_Script_draw_line_sprite(param_1,param_2,&local_218,2,ppuVar10);
    local_1c8 = 0x273;
    local_1f8 = 0x3ff0000000000000;
    uStack_1f0 = CONCAT44(0xd,(uint)uStack_1f0);
    local_208 = 0;
    uStack_204 = 0x3ff00000;
    uStack_200 = (uint)uStack_1f0;
    uStack_1fc = 0xd;
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_208);
  } while( true );
}

