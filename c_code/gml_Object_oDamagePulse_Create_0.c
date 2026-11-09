// gml_Object_oDamagePulse_Create_0 @ 0x1408e0120

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oDamagePulse_Create_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong *puVar4;
  uint *puVar5;
  code *pcVar6;
  ulonglong uVar7;
  undefined4 uVar10;
  undefined8 uVar8;
  uint **ppuVar9;
  ulonglong in_stack_fffffffffffffe20;
  ulonglong uVar11;
  ulonglong **ppuVar12;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  longlong *local_1c8;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  uint local_1a8;
  uint uStack_1a4;
  uint uStack_1a0;
  uint uStack_19c;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  ulonglong local_188;
  undefined4 local_17c;
  longlong *local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  char *local_140;
  undefined4 local_138;
  uint local_130 [3];
  undefined4 local_124;
  uint local_120 [3];
  undefined4 local_114;
  ulonglong local_108 [2];
  ulonglong local_f8 [2];
  undefined1 local_e8 [16];
  ulonglong local_d8 [2];
  uint local_c8 [3];
  byte local_bc;
  uint local_b8 [4];
  uint local_a8 [4];
  undefined1 local_98 [16];
  ulonglong *local_88;
  ulonglong *local_80;
  undefined1 *local_78;
  ulonglong *local_70;
  uint *local_68;
  uint *local_60;
  uint *local_58;
  undefined1 *local_50;
  undefined8 local_48;
  uint uStack_40;
  uint uStack_3c;
  undefined8 local_38;
  undefined4 local_2c;
  longlong *local_28;
  undefined4 local_1c;
  
  local_140 = "gml_Object_oDamageBox_Step_0";
  local_138 = 0;
  local_148 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_148;
  pcVar6 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_108,0x10,8,FUN_1400424d0,FUN_140041b30);
  local_2c = 0xffffff;
  local_38 = 0;
  uStack_14c = 0xffffff;
  local_158 = 0;
  uStack_15c = 0xffffff;
  local_168 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_114 = 0xffffff;
  local_120[0] = 0;
  local_120[1] = 0;
  uStack_3c = 0xffffff;
  local_48 = 0;
  local_124 = 0xffffff;
  local_130[0] = 0;
  local_130[1] = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_138 = 1;
  local_1bc = 6;
  in_stack_fffffffffffffe20 = in_stack_fffffffffffffe20 & 0xffffffffffffff00;
  uVar7 = (ulonglong)pcVar6 & 0xffffffffffffff00;
  local_1c8 = param_1;
  FUN_140e87440(&local_1c8,DAT_141a0a7e8,0,&local_38,uVar7,in_stack_fffffffffffffe20);
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1bc = 0;
  local_1c8 = (longlong *)&DAT_bff0000000000000;
  iVar2 = FUN_140e851f0(&local_38,&local_1c8,DAT_141955260,0);
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if (iVar2 == 0) {
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_1d8 = 0;
    local_1d0 = 0;
    local_1cc = 5;
    local_1bc = 6;
    in_stack_fffffffffffffe20 = in_stack_fffffffffffffe20 & 0xffffffffffffff00;
    uVar7 = uVar7 & 0xffffffffffffff00;
    local_1c8 = param_1;
    FUN_140e87440(&local_1c8,DAT_1419fe0e8,0x80000000,&local_158,uVar7,in_stack_fffffffffffffe20);
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1bc = 6;
    uVar7 = uVar7 & 0xffffffffffffff00;
    local_1c8 = param_1;
    FUN_140e87440(&local_1c8,DAT_1419fe158,0x80000000,&local_168,uVar7,
                  in_stack_fffffffffffffe20 & 0xffffffffffffff00);
    uVar10 = (undefined4)(uVar7 >> 0x20);
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_198 = local_158;
    uStack_190 = uStack_150;
    uStack_18c = uStack_14c;
    if ((1 << ((byte)local_108[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_198);
    local_198 = local_168;
    uStack_190 = uStack_160;
    uStack_18c = uStack_15c;
    local_88 = local_108;
    if ((1 << ((byte)local_f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_198);
    local_80 = local_f8;
    uStack_16c = 0xf;
    local_178 = (longlong *)0x1000000000000b8;
    local_198 = 0x1000000000000b8;
    uStack_190 = uStack_170;
    uStack_18c = 0xf;
    if ((1 << (local_e8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_198);
    local_78 = local_e8;
    uVar8 = CONCAT44(uVar10,DAT_141a12628);
    uVar3 = FUN_140e634e0(param_1,param_2,&local_1d8,3,uVar8,&local_88);
    uVar10 = (undefined4)((ulonglong)uVar8 >> 0x20);
    cVar1 = FUN_140e491e0(uVar3);
    if (cVar1 != '\0') {
      local_138 = 3;
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      local_1b8 = 0;
      local_1b0 = 0;
      local_1ac = 5;
      uVar11 = 0;
      uVar7 = CONCAT44(uVar10,DAT_1419ef5d8);
      puVar4 = (ulonglong *)FUN_140e634e0(param_1,param_2,&local_1b8,0,uVar7,0);
      if (puVar4 != &local_188) {
        local_198 = *puVar4;
        uStack_190 = (undefined4)puVar4[1];
        uStack_18c = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        FUN_140041b80(&local_188,&local_198);
      }
      local_138 = 4;
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_1d8 = 0;
      local_1d0 = 0;
      local_1cc = 5;
      local_1bc = 6;
      uVar11 = uVar11 & 0xffffffffffffff00;
      uVar7 = uVar7 & 0xffffffffffffff00;
      local_1c8 = param_1;
      FUN_140e87440(&local_1c8,DAT_1419fe0e8,0x80000000,&local_158,uVar7,uVar11);
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      local_1bc = 6;
      uVar7 = uVar7 & 0xffffffffffffff00;
      local_1c8 = param_1;
      FUN_140e87440(&local_1c8,DAT_1419fe158,0x80000000,&local_168,uVar7,uVar11 & 0xffffffffffffff00
                   );
      uVar10 = (undefined4)(uVar7 >> 0x20);
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      local_198 = local_158;
      uStack_190 = uStack_150;
      uStack_18c = uStack_14c;
      if ((1 << ((byte)local_108[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_198);
      local_198 = local_168;
      uStack_190 = uStack_160;
      uStack_18c = uStack_15c;
      local_88 = local_108;
      if ((1 << ((byte)local_f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_f8);
      }
      FUN_140041b80(local_f8,&local_198);
      local_80 = local_f8;
      uStack_16c = 0xf;
      local_178 = (longlong *)0x1000000000000b8;
      local_198 = 0x1000000000000b8;
      uStack_190 = uStack_170;
      uStack_18c = 0xf;
      if ((1 << (local_e8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_e8);
      }
      FUN_140041b80(local_e8,&local_198);
      local_78 = local_e8;
      local_70 = &local_188;
      local_198 = CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
      uStack_190 = uRam00000001419df7a8;
      uStack_18c = uRam00000001419df7ac;
      if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_c8);
      }
      FUN_140041b80(local_c8,&local_198);
      local_68 = local_c8;
      ppuVar9 = (uint **)CONCAT44(uVar10,DAT_141a56b80);
      FUN_140e634e0(param_1,param_2,&local_1d8,5,ppuVar9,&local_88);
      local_138 = 6;
      while( true ) {
        uVar10 = (undefined4)((ulonglong)ppuVar9 >> 0x20);
        if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        local_1d8 = 0;
        local_1d0 = 0;
        local_1cc = 5;
        local_88 = &local_188;
        uVar8 = CONCAT44(uVar10,DAT_1419f58d8);
        uVar3 = FUN_140e634e0(param_1,param_2,&local_1d8,1,uVar8,&local_88);
        uVar10 = (undefined4)((ulonglong)uVar8 >> 0x20);
        cVar1 = FUN_140e491e0(uVar3);
        if (cVar1 != '\0') break;
        local_138 = 8;
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        local_1b8 = 0;
        local_1b0 = 0;
        local_1ac = 5;
        local_80 = &local_188;
        local_1a8 = _DAT_141dc6d20;
        uStack_1a4 = uRam0000000141dc6d24;
        uStack_1a0 = uRam0000000141dc6d28;
        uStack_19c = uRam0000000141dc6d2c;
        if ((1 << (local_e8[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_e8);
        }
        FUN_140041b80(local_e8,&local_1a8);
        local_78 = local_e8;
        uVar3 = CONCAT44(uVar10,DAT_1419f5a78);
        puVar5 = (uint *)FUN_140e634e0(param_1,param_2,&local_1b8,2,uVar3,&local_80);
        uVar10 = (undefined4)((ulonglong)uVar3 >> 0x20);
        if (puVar5 != local_120) {
          local_1a8 = *puVar5;
          uStack_1a4 = puVar5[1];
          uStack_1a0 = puVar5[2];
          uStack_19c = puVar5[3];
          if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_120);
          }
          FUN_140041b80(local_120,&local_1a8);
        }
        local_138 = 9;
        if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        local_1d8 = 0;
        local_1d0 = 0;
        local_1cc = 5;
        local_88 = &local_188;
        local_1a8 = _DAT_141dc6d20;
        uStack_1a4 = uRam0000000141dc6d24;
        uStack_1a0 = uRam0000000141dc6d28;
        uStack_19c = uRam0000000141dc6d2c;
        if ((1 << ((byte)local_f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_f8);
        }
        FUN_140041b80(local_f8,&local_1a8);
        local_80 = local_f8;
        ppuVar12 = &local_88;
        uVar7 = CONCAT44(uVar10,DAT_1419f5938);
        FUN_140e634e0(param_1,param_2,&local_1d8,2,uVar7,ppuVar12);
        local_138 = 0xb;
        if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        local_1d8 = 0;
        local_1d0 = 0;
        local_1cc = 5;
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        local_1b8 = 0;
        local_1b0 = 0;
        local_1ac = 5;
        puVar5 = (uint *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a7d8);
        local_1bc = 6;
        uVar11 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
        uVar7 = uVar7 & 0xffffffffffffff00;
        local_1c8 = param_1;
        FUN_140e87440(&local_1c8,DAT_1419fe0e8,0x80000000,&local_158,uVar7,uVar11);
        if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        local_1c = 6;
        uVar11 = uVar11 & 0xffffffffffffff00;
        uVar7 = uVar7 & 0xffffffffffffff00;
        local_28 = param_1;
        FUN_140e87440(&local_28,DAT_1419fe158,0x80000000,&local_168,uVar7,uVar11);
        if ((1 << ((byte)local_1c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_28);
        }
        uStack_16c = 6;
        uVar7 = uVar7 & 0xffffffffffffff00;
        local_178 = param_1;
        FUN_140e87440(&local_178,DAT_141a0a828,0x80000000,&local_48,uVar7,
                      uVar11 & 0xffffffffffffff00);
        uVar10 = (undefined4)(uVar7 >> 0x20);
        if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        local_1a8 = DAT_141a575a0 & 0xffffff;
        uStack_1a4 = (int)(DAT_141a575a0 | 0x5000000) >> 0x18 & 0xff;
        if (uStack_1a4 == 0xf) {
          uStack_1a4 = 0x4000004;
        }
        else {
          uStack_1a4 = uStack_1a4 | 0x1000000;
        }
        uStack_18c = 0xf;
        local_198 = CONCAT44(uStack_1a4,DAT_141a575a0) & 0xffffffff00ffffff;
        uStack_1a0 = uStack_190;
        uStack_19c = 0xf;
        if ((1 << ((byte)local_108[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_108);
        }
        FUN_140041b80(local_108,&local_1a8);
        local_1a8 = (uint)local_158;
        uStack_1a4 = local_158._4_4_;
        uStack_1a0 = uStack_150;
        uStack_19c = uStack_14c;
        local_88 = local_108;
        if ((1 << ((byte)local_f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_f8);
        }
        FUN_140041b80(local_f8,&local_1a8);
        local_80 = local_f8;
        local_1a8 = (uint)local_168;
        uStack_1a4 = local_168._4_4_;
        uStack_1a0 = uStack_160;
        uStack_19c = uStack_15c;
        if ((1 << (local_e8[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_e8);
        }
        FUN_140041b80(local_e8,&local_1a8);
        local_78 = local_e8;
        local_1a8 = (uint)local_48;
        uStack_1a4 = local_48._4_4_;
        uStack_1a0 = uStack_40;
        uStack_19c = uStack_3c;
        if ((1 << ((byte)local_d8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_d8);
        }
        FUN_140041b80(local_d8,&local_1a8);
        local_70 = local_d8;
        local_68 = local_120;
        if (puVar5 != local_b8) {
          local_1a8 = *puVar5;
          uStack_1a4 = puVar5[1];
          uStack_1a0 = puVar5[2];
          uStack_19c = puVar5[3];
          if ((1 << ((byte)local_b8[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_b8);
          }
          FUN_140041b80(local_b8,&local_1a8);
        }
        local_60 = local_b8;
        puVar5 = (uint *)FUN_140e634e0(param_1,param_2,&local_1b8,6,CONCAT44(uVar10,DAT_1419fd6d8),
                                       &local_88);
        if (puVar5 != local_a8) {
          local_1a8 = *puVar5;
          uStack_1a4 = puVar5[1];
          uStack_1a0 = puVar5[2];
          uStack_19c = puVar5[3];
          if ((1 << ((byte)local_a8[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_a8);
          }
          FUN_140041b80(local_a8,&local_1a8);
        }
        local_58 = local_a8;
        local_1a8 = (uint)DAT_1419df7b0;
        uStack_1a4 = DAT_1419df7b0._4_4_;
        uStack_1a0 = DAT_1419df7b8;
        uStack_19c = DAT_1419df7bc;
        if ((1 << (local_98[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_98);
        }
        FUN_140041b80(local_98,&local_1a8);
        local_50 = local_98;
        ppuVar9 = &local_58;
        gml_Script_draw_line_sprite(param_1,param_2,&local_1d8,2,ppuVar9);
      }
      local_138 = 0xe;
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_1d8 = 0;
      local_1d0 = 0;
      local_1cc = 5;
      local_88 = &local_188;
      FUN_140e634e0(param_1,param_2,&local_1d8,1,CONCAT44(uVar10,DAT_1419f6038),&local_88);
      local_138 = 0x10;
      puVar5 = (uint *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f60c8);
      if (puVar5 != local_130) {
        local_1a8 = *puVar5;
        uStack_1a4 = puVar5[1];
        uStack_1a0 = puVar5[2];
        uStack_19c = puVar5[3];
        if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_130);
        }
        FUN_140041b80(local_130,&local_1a8);
      }
      FUN_140e86fa0(param_1,DAT_141a0a7e8,0,local_130);
    }
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_130);
  }
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_120);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  _eh_vector_destructor_iterator_(local_108,0x10,8,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_148;
  return;
}

