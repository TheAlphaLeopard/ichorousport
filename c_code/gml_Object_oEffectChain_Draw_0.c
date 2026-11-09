// gml_Object_oEffectChain_Draw_0 @ 0x14091f4b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oEffectChain_Draw_0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *local_res8;
  longlong *local_res10;
  undefined4 local_res18;
  code *pcVar8;
  undefined4 uVar11;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong in_stack_fffffffffffffde0;
  longlong *plVar12;
  undefined8 **ppuVar13;
  longlong *local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  char *local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b4;
  undefined8 local_1a8 [2];
  undefined1 local_198 [16];
  undefined1 local_188 [12];
  byte local_17c;
  undefined1 local_178 [12];
  byte local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  longlong *local_128;
  undefined4 local_120;
  undefined4 local_11c;
  longlong *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined1 local_78 [16];
  longlong local_68;
  
  local_res18 = 0;
  local_1d0 = "gml_Object_oEffectBruteRoar_Step_0";
  local_1c8 = 0;
  local_1d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1d8;
  pcVar8 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_1a8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_10c = 0xffffff;
  local_118 = (longlong *)0x0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_11c = 0xffffff;
  local_128 = (longlong *)0x0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  local_1b4 = 0xffffff;
  local_1c0 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_1fc = 0xffffff;
  local_208 = 0;
  local_1c8 = 2;
  uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f0d0);
  uStack_20c = 0;
  local_218 = (longlong *)0xc010000000000000;
  iVar2 = FUN_140e851f0(uVar5,&local_218,DAT_141955260,0);
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if (iVar2 != 0) {
    local_1c8 = 4;
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    uVar11 = (undefined4)((ulonglong)pcVar8 >> 0x20);
    local_208 = 0;
    local_200 = 0;
    local_1fc = 5;
    puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f0d0);
    if (puVar6 != local_1a8) {
      local_1f8 = (longlong *)*puVar6;
      uStack_1f0 = *(undefined4 *)(puVar6 + 1);
      uStack_1ec = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)local_1a8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1a8);
      }
      FUN_140041b80(local_1a8,&local_1f8);
    }
    local_d8 = local_1a8;
    uVar5 = FUN_140e634e0(local_res8,local_res10,&local_208,1,CONCAT44(uVar11,DAT_141a02ef8),
                          &local_d8);
    cVar1 = FUN_140e491e0(uVar5);
    if (cVar1 == '\0') {
      local_1c8 = 6;
      FUN_140edd0e0(local_res8,local_res10,0,0);
      local_1c8 = 7;
      goto LAB_14092014d;
    }
    local_1c8 = 9;
    uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f0d0);
    uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a09918);
    FUN_140e87170(uVar5,DAT_1419fe0e8,0x80000000,&local_118,local_res8,local_res10);
    uStack_20c = local_10c;
    uStack_210 = local_110;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) == 0) {
      local_218 = local_118;
    }
    else {
      FUN_1400419b0(&local_218,&local_118);
    }
    local_res18 = 1;
    FUN_1400460e0(&local_218,uVar7);
    local_1f8 = local_218;
    uStack_1f0 = uStack_210;
    uStack_1ec = uStack_20c;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_1f8);
    local_res18 = 0;
    if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    FUN_140e86fa0(local_res8,DAT_1419fe0e8,0x80000000,&local_e8);
    local_1c8 = 10;
    uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f0d0);
    plVar9 = local_res8;
    plVar12 = local_res10;
    FUN_140e87170(uVar5,DAT_1419fe158,0x80000000,&local_128,local_res8,local_res10);
    in_stack_fffffffffffffde0 = (ulonglong)plVar12 & 0xffffffffffffff00;
    pcVar8 = (code *)((ulonglong)plVar9 & 0xffffffffffffff00);
    FUN_140e87440(uVar5,DAT_1419f5828,0x80000000,&local_88,pcVar8,in_stack_fffffffffffffde0);
    uStack_20c = local_11c;
    uStack_210 = local_120;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) == 0) {
      local_218 = local_128;
    }
    else {
      FUN_1400419b0(&local_218,&local_128);
    }
    local_res18 = 2;
    FUN_1400460e0(&local_218,&local_88);
    local_1f8 = local_218;
    uStack_1f0 = uStack_210;
    uStack_1ec = uStack_20c;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_1f8);
    if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    FUN_140e86fa0(local_res8,DAT_1419fe158,0x80000000,&local_f8);
  }
  local_1c8 = 0xd;
  uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a848);
  uStack_20c = 0;
  local_218 = (longlong *)0x402e000000000000;
  uVar3 = FUN_140e851f0(uVar5,&local_218,DAT_141955260,1);
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if (uVar3 < 0x80000000) {
    local_1c8 = 0xf;
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    local_208 = 0;
    local_200 = 0;
    local_1fc = 5;
    uStack_20c = 6;
    local_218 = local_res8;
    in_stack_fffffffffffffde0 = in_stack_fffffffffffffde0 & 0xffffffffffffff00;
    uVar10 = (ulonglong)pcVar8 & 0xffffffffffffff00;
    FUN_140e87440(&local_218,DAT_1419fe0e8,0x80000000,&local_98,uVar10,in_stack_fffffffffffffde0);
    if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    uStack_20c = 6;
    local_218 = local_res8;
    uVar10 = uVar10 & 0xffffffffffffff00;
    FUN_140e87440(&local_218,DAT_1419fe158,0x80000000,&local_a8,uVar10,
                  in_stack_fffffffffffffde0 & 0xffffffffffffff00);
    uVar11 = (undefined4)(uVar10 >> 0x20);
    if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_1f8 = (longlong *)local_98;
    uStack_1f0 = uStack_90;
    uStack_1ec = uStack_8c;
    if ((1 << ((byte)local_1a8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1a8);
    }
    FUN_140041b80(local_1a8,&local_1f8);
    local_d8 = local_1a8;
    local_1f8 = (longlong *)local_a8;
    uStack_1f0 = uStack_a0;
    uStack_1ec = uStack_9c;
    if ((1 << (local_198[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_198);
    }
    FUN_140041b80(local_198,&local_1f8);
    local_d0 = local_198;
    local_1f8 = (longlong *)CONCAT44(uRam0000000141dd858c,_DAT_141dd8588);
    uStack_1f0 = uRam0000000141dd8590;
    uStack_1ec = DAT_141dd8594;
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_188);
    }
    FUN_140041b80(local_188,&local_1f8);
    local_c8 = local_188;
    uStack_20c = 0xf;
    local_218 = (longlong *)0x10000000000012d;
    local_1f8 = (longlong *)0x10000000000012d;
    uStack_1f0 = uStack_210;
    uStack_1ec = 0xf;
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_178);
    }
    FUN_140041b80(local_178,&local_1f8);
    local_c0 = local_178;
    ppuVar13 = &local_d8;
    uVar10 = CONCAT44(uVar11,DAT_141a0a7c8);
    uVar5 = FUN_140e634e0(local_res8,local_res10,&local_208,4,uVar10,ppuVar13);
    iVar2 = FUN_140e63cb0(local_78,&local_res8,&local_res10,uVar5);
    if (0 < iVar2) {
      do {
        local_1c8 = 0x11;
        uStack_1ec = 0xf;
        local_1f8 = (longlong *)0x10000010000028e;
        local_1e8 = 0x28e;
        uStack_1e4 = 0x1000001;
        uStack_1e0 = uStack_1f0;
        uStack_1dc = 0xf;
        if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        FUN_140041b80(&local_108,&local_1e8);
        FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_108);
        local_1c8 = 0x12;
        if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        local_12c = 0;
        local_138 = 0;
        FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_138);
        local_1c8 = 0x13;
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        local_13c = 0;
        local_148 = 0x3ff0000000000000;
        FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_148);
        local_1c8 = 0x14;
        uStack_20c = 6;
        local_218 = local_res10;
        ppuVar13 = (undefined8 **)((ulonglong)ppuVar13 & 0xffffffffffffff00);
        uVar10 = uVar10 & 0xffffffffffffff00;
        FUN_140e87440(&local_218,DAT_141a0a778,0x80000000,&local_b8,uVar10,ppuVar13);
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        local_1e8 = (undefined4)local_b8;
        uStack_1e4 = local_b8._4_4_;
        uStack_1e0 = uStack_b0;
        uStack_1dc = uStack_ac;
        if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c0);
        }
        FUN_140041b80(&local_1c0,&local_1e8);
        FUN_140e86fa0(local_res8,DAT_141a0a778,0x80000000,&local_1c0);
        local_1c8 = 0x15;
        if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        local_208 = 0;
        local_200 = 0;
        local_1fc = 5;
        local_1e8 = _DAT_1419ea1d0;
        uStack_1e4 = uRam00000001419ea1d4;
        uStack_1e0 = uRam00000001419ea1d8;
        uStack_1dc = uRam00000001419ea1dc;
        if ((1 << ((byte)local_1a8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1a8);
        }
        FUN_140041b80(local_1a8,&local_1e8);
        local_d8 = local_1a8;
        local_1e8 = _DAT_1419ea1c0;
        uStack_1e4 = uRam00000001419ea1c4;
        uStack_1e0 = uRam00000001419ea1c8;
        uStack_1dc = uRam00000001419ea1cc;
        if ((1 << (local_198[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_198);
        }
        FUN_140041b80(local_198,&local_1e8);
        local_d0 = local_198;
        puVar6 = (undefined8 *)FUN_140e78db0(&local_208,2,&local_d8);
        if (puVar6 != &local_158) {
          local_1e8 = *(undefined4 *)puVar6;
          uStack_1e4 = *(undefined4 *)((longlong)puVar6 + 4);
          uStack_1e0 = *(undefined4 *)(puVar6 + 1);
          uStack_1dc = *(undefined4 *)((longlong)puVar6 + 0xc);
          if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_158);
          }
          FUN_140041b80(&local_158,&local_1e8);
        }
        FUN_140e86fa0(local_res8,DAT_141a0f7f8,0x80000000,&local_158);
        local_1c8 = 0x16;
        if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        local_208 = 0;
        local_200 = 0;
        local_1fc = 5;
        local_1e8 = _DAT_1419ea1d0;
        uStack_1e4 = uRam00000001419ea1d4;
        uStack_1e0 = uRam00000001419ea1d8;
        uStack_1dc = uRam00000001419ea1dc;
        if ((1 << ((byte)local_1a8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1a8);
        }
        FUN_140041b80(local_1a8,&local_1e8);
        local_d8 = local_1a8;
        local_1e8 = _DAT_1419ea1c0;
        uStack_1e4 = uRam00000001419ea1c4;
        uStack_1e0 = uRam00000001419ea1c8;
        uStack_1dc = uRam00000001419ea1cc;
        if ((1 << (local_198[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_198);
        }
        FUN_140041b80(local_198,&local_1e8);
        local_d0 = local_198;
        puVar6 = (undefined8 *)FUN_140e78db0(&local_208,2,&local_d8);
        if (puVar6 != &local_168) {
          local_1e8 = *(undefined4 *)puVar6;
          uStack_1e4 = *(undefined4 *)((longlong)puVar6 + 4);
          uStack_1e0 = *(undefined4 *)(puVar6 + 1);
          uStack_1dc = *(undefined4 *)((longlong)puVar6 + 0xc);
          if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_168);
          }
          FUN_140041b80(&local_168,&local_1e8);
        }
        FUN_140e86fa0(local_res8,DAT_141a0f938,0x80000000,&local_168);
        cVar1 = FUN_140e643f0(local_78,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(local_78,&local_res8,&local_res10);
    local_1c8 = 0x1a;
    uStack_20c = 6;
    local_218 = local_res8;
    FUN_140e87440(&local_218,DAT_141a0a778,0x80000000,&local_1c0,uVar10 & 0xffffffffffffff00,
                  (ulonglong)ppuVar13 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    FUN_140162d40(&local_1c0,0x5a);
    FUN_140e86fa0(local_res8,DAT_141a0a778,0x80000000,&local_1c0);
    local_1c8 = 0x1b;
    puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a848);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    *puVar6 = 0;
    if (local_68 != 0) {
      FUN_140e4cd60();
    }
  }
  local_1c8 = 0x1e;
  uVar5 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a848);
  FUN_140e609c0(local_res8);
  FUN_1400460e0(uVar5,uVar4);
  FUN_140e60910(1);
LAB_14092014d:
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c0);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  _eh_vector_destructor_iterator_(local_1a8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1d8;
  return;
}

