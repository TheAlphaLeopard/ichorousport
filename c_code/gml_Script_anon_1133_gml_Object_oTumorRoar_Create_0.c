// gml_Script_anon_1133_gml_Object_oTumorRoar_Create_0 @ 0x140ded0a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_1133_gml_Object_oTumorRoar_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint *puVar6;
  undefined4 uVar10;
  ulonglong uVar7;
  undefined8 uVar8;
  uint **ppuVar9;
  ulonglong uVar11;
  uint **ppuVar12;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  uint local_1b8;
  uint uStack_1b4;
  uint uStack_1b0;
  uint uStack_1ac;
  undefined8 local_1a8;
  uint uStack_1a0;
  uint uStack_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  longlong *local_188;
  undefined4 local_17c;
  uint local_178 [3];
  undefined4 local_16c;
  uint local_168 [3];
  undefined4 local_15c;
  undefined8 local_158;
  char *local_150;
  undefined4 local_148;
  uint local_138 [4];
  uint local_128 [4];
  undefined8 local_118 [2];
  uint local_108 [4];
  uint local_f8 [3];
  byte local_ec;
  uint local_e8 [4];
  uint local_d8 [4];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  uint uStack_b0;
  uint uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint *local_88;
  uint *local_80;
  undefined8 *local_78;
  uint *local_70;
  uint *local_68;
  uint *local_60;
  uint *local_58;
  undefined1 *local_50;
  undefined8 local_48;
  undefined4 local_3c;
  longlong *local_38;
  undefined4 local_2c;
  
  local_150 = "gml_Script_anon@332@gml_Object_oTumorRoar_Create_0";
  local_158 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_158;
  local_148 = 0x1b;
  uVar10 = 1;
  _eh_vector_constructor_iterator_(local_138,0x10,8,FUN_1400424d0,FUN_140041b30);
  local_16c = 0xffffff;
  local_178[0] = 0;
  local_178[1] = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  local_15c = 0xffffff;
  local_168[0] = 0;
  local_168[1] = 0;
  local_3c = 0xffffff;
  local_48 = 0;
  local_1bc = 0;
  local_1c8 = 0;
  local_18c = 0;
  local_198 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_148 = 0x1d;
  uVar11 = 0;
  uVar7 = CONCAT44(uVar10,DAT_1419ef5d8);
  puVar3 = (uint *)FUN_140e634e0(param_1,param_2,&local_1c8,0,uVar7,0);
  if (puVar3 != local_178) {
    local_1a8 = *(ulonglong *)puVar3;
    uStack_1a0 = puVar3[2];
    uStack_19c = puVar3[3];
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_178);
    }
    FUN_140041b80(local_178,&local_1a8);
  }
  local_148 = 0x1e;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a01688);
  local_17c = 6;
  uVar11 = uVar11 & 0xffffffffffffff00;
  uVar7 = uVar7 & 0xffffffffffffff00;
  local_188 = param_1;
  FUN_140e87440(&local_188,DAT_1419fe0e8,0x80000000,&local_a8,uVar7,uVar11);
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_17c = 6;
  uVar7 = uVar7 & 0xffffffffffffff00;
  local_188 = param_1;
  FUN_140e87440(&local_188,DAT_1419fe158,0x80000000,&local_b8,uVar7,uVar11 & 0xffffffffffffff00);
  uVar10 = (undefined4)(uVar7 >> 0x20);
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_1a8 = local_a8;
  uStack_1a0 = uStack_a0;
  uStack_19c = uStack_9c;
  if ((1 << ((byte)local_138[3] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_1a8);
  local_88 = local_138;
  local_1a8 = local_b8;
  uStack_1a0 = uStack_b0;
  uStack_19c = uStack_ac;
  if ((1 << ((byte)local_128[3] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_1a8);
  local_80 = local_128;
  if (puVar4 != local_118) {
    local_1a8 = *puVar4;
    uStack_1a0 = *(uint *)(puVar4 + 1);
    uStack_19c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_118[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_1a8);
  }
  local_78 = local_118;
  uStack_8c = 0xf;
  local_98 = (longlong *)0x10000000000009d;
  local_1a8 = 0x10000000000009d;
  uStack_1a0 = uStack_90;
  uStack_19c = 0xf;
  if ((1 << ((byte)local_108[3] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_1a8);
  local_70 = local_108;
  local_1a8 = CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
  uStack_1a0 = uRam00000001419df7a8;
  uStack_19c = uRam00000001419df7ac;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_1a8);
  local_1a8 = CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
  uStack_1a0 = uRam00000001419df7c8;
  uStack_19c = uRam00000001419df7cc;
  local_68 = local_f8;
  if ((1 << ((byte)local_e8[3] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_1a8);
  local_60 = local_e8;
  local_58 = local_178;
  local_1a8 = CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
  uStack_1a0 = uRam00000001419df7a8;
  uStack_19c = uRam00000001419df7ac;
  if ((1 << (local_c8[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_1a8);
  local_50 = local_c8;
  ppuVar9 = (uint **)CONCAT44(uVar10,DAT_1419f5fe8);
  FUN_140e634e0(param_1,param_2,&local_1c8,8,ppuVar9,&local_88);
  local_148 = 0x1f;
  while( true ) {
    uVar10 = (undefined4)((ulonglong)ppuVar9 >> 0x20);
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    local_88 = local_178;
    uVar8 = CONCAT44(uVar10,DAT_1419f58d8);
    uVar5 = FUN_140e634e0(param_1,param_2,&local_1c8,1,uVar8,&local_88);
    uVar10 = (undefined4)((ulonglong)uVar8 >> 0x20);
    cVar1 = FUN_140e491e0(uVar5);
    if (cVar1 != '\0') break;
    local_148 = 0x21;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    local_80 = local_178;
    local_1b8 = _DAT_141dc7960;
    uStack_1b4 = uRam0000000141dc7964;
    uStack_1b0 = uRam0000000141dc7968;
    uStack_1ac = uRam0000000141dc796c;
    if ((1 << ((byte)local_118[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_1b8);
    local_78 = local_118;
    uVar5 = CONCAT44(uVar10,DAT_1419f5a78);
    puVar3 = (uint *)FUN_140e634e0(param_1,param_2,&local_198,2,uVar5,&local_80);
    uVar10 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (puVar3 != local_168) {
      local_1b8 = *puVar3;
      uStack_1b4 = puVar3[1];
      uStack_1b0 = puVar3[2];
      uStack_1ac = puVar3[3];
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_168);
      }
      FUN_140041b80(local_168,&local_1b8);
    }
    local_148 = 0x22;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    local_88 = local_178;
    local_1b8 = _DAT_141dc7960;
    uStack_1b4 = uRam0000000141dc7964;
    uStack_1b0 = uRam0000000141dc7968;
    uStack_1ac = uRam0000000141dc796c;
    if ((1 << ((byte)local_128[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_1b8);
    local_80 = local_128;
    uVar5 = CONCAT44(uVar10,DAT_1419f5938);
    FUN_140e634e0(param_1,param_2,&local_1c8,2,uVar5,&local_88);
    uVar10 = (undefined4)((ulonglong)uVar5 >> 0x20);
    local_148 = 0x23;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    local_88 = local_168;
    ppuVar12 = &local_88;
    ppuVar9 = (uint **)CONCAT44(uVar10,DAT_141a02ef8);
    uVar5 = FUN_140e634e0(param_1,param_2,&local_1c8,1,ppuVar9,ppuVar12);
    cVar1 = FUN_140e491e0(uVar5);
    if (cVar1 == '\0') {
      local_148 = 0x23;
    }
    else {
      local_148 = 0x24;
      uVar7 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
      ppuVar9 = (uint **)((ulonglong)ppuVar9 & 0xffffffffffffff00);
      FUN_140e87440(local_168,DAT_141a56cd0,0x80000000,&local_48,ppuVar9,uVar7);
      local_17c = 10;
      local_188 = (longlong *)0x2;
      iVar2 = FUN_140e851f0(&local_48,&local_188,DAT_141955260,0);
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      if (iVar2 == 0) {
        local_148 = 0x24;
      }
      else {
        local_148 = 0x26;
        if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        local_1c8 = 0;
        local_1c0 = 0;
        local_1bc = 5;
        if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        local_198 = 0;
        local_190 = 0;
        local_18c = 5;
        puVar3 = (uint *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
        puVar6 = (uint *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a7d8);
        local_2c = 6;
        uVar7 = uVar7 & 0xffffffffffffff00;
        uVar11 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
        local_38 = param_1;
        FUN_140e87440(&local_38,DAT_1419fe0e8,0x80000000,&local_a8,uVar11,uVar7);
        if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_38);
        }
        uStack_8c = 6;
        uVar11 = uVar11 & 0xffffffffffffff00;
        local_98 = param_1;
        FUN_140e87440(&local_98,DAT_1419fe158,0x80000000,&local_b8,uVar11,uVar7 & 0xffffffffffffff00
                     );
        uVar10 = (undefined4)(uVar11 >> 0x20);
        if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_98);
        }
        local_1b8 = DAT_141a575a0 & 0xffffff;
        uStack_1b4 = (int)(DAT_141a575a0 | 0x5000000) >> 0x18 & 0xff;
        if (uStack_1b4 == 0xf) {
          uStack_1b4 = 0x4000004;
        }
        else {
          uStack_1b4 = uStack_1b4 | 0x1000000;
        }
        uStack_19c = 0xf;
        local_1a8 = CONCAT44(uStack_1b4,DAT_141a575a0) & 0xffffffff00ffffff;
        uStack_1b0 = uStack_1a0;
        uStack_1ac = 0xf;
        if ((1 << ((byte)local_138[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_138);
        }
        FUN_140041b80(local_138,&local_1b8);
        local_88 = local_138;
        local_1b8 = (uint)local_a8;
        uStack_1b4 = local_a8._4_4_;
        uStack_1b0 = uStack_a0;
        uStack_1ac = uStack_9c;
        if ((1 << ((byte)local_128[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_128);
        }
        FUN_140041b80(local_128,&local_1b8);
        local_80 = local_128;
        local_1b8 = (uint)local_b8;
        uStack_1b4 = local_b8._4_4_;
        uStack_1b0 = uStack_b0;
        uStack_1ac = uStack_ac;
        if ((1 << ((byte)local_118[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_118);
        }
        FUN_140041b80(local_118,&local_1b8);
        local_78 = local_118;
        if (puVar3 != local_108) {
          local_1b8 = *puVar3;
          uStack_1b4 = puVar3[1];
          uStack_1b0 = puVar3[2];
          uStack_1ac = puVar3[3];
          if ((1 << ((byte)local_108[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_108);
          }
          FUN_140041b80(local_108,&local_1b8);
        }
        local_70 = local_108;
        local_68 = local_168;
        if (puVar6 != local_e8) {
          local_1b8 = *puVar6;
          uStack_1b4 = puVar6[1];
          uStack_1b0 = puVar6[2];
          uStack_1ac = puVar6[3];
          if ((1 << ((byte)local_e8[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_e8);
          }
          FUN_140041b80(local_e8,&local_1b8);
        }
        local_60 = local_e8;
        puVar3 = (uint *)FUN_140e634e0(param_1,param_2,&local_198,6,CONCAT44(uVar10,DAT_1419fd6d8),
                                       &local_88);
        if (puVar3 != local_d8) {
          local_1b8 = *puVar3;
          uStack_1b4 = puVar3[1];
          uStack_1b0 = puVar3[2];
          uStack_1ac = puVar3[3];
          if ((1 << ((byte)local_d8[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_d8);
          }
          FUN_140041b80(local_d8,&local_1b8);
        }
        local_58 = local_d8;
        local_1b8 = (uint)DAT_1419df7b0;
        uStack_1b4 = DAT_1419df7b0._4_4_;
        uStack_1b0 = DAT_1419df7b8;
        uStack_1ac = DAT_1419df7bc;
        if ((1 << (local_c8[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_c8);
        }
        FUN_140041b80(local_c8,&local_1b8);
        local_50 = local_c8;
        ppuVar9 = &local_58;
        gml_Script_draw_line_sprite(param_1,param_2,&local_1c8,2,ppuVar9);
      }
    }
  }
  local_148 = 0x28;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  local_88 = local_178;
  FUN_140e634e0(param_1,param_2,&local_1c8,1,CONCAT44(uVar10,DAT_1419f6038),&local_88);
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_168);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_178);
  }
  _eh_vector_destructor_iterator_(local_138,0x10,8,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_158;
  return param_3;
}

