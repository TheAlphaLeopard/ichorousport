// gml_Object_oDischarge_Step_0 @ 0x14091cb70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oDischarge_Step_0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 uVar8;
  ulonglong uVar7;
  undefined1 **ppuVar9;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_3c;
  
  local_80 = "gml_Object_oDirtPatch_Step_0";
  local_78 = 0;
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  uVar8 = 1;
  _eh_vector_constructor_iterator_(local_108,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_4c = 0xffffff;
  local_58 = 0;
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_ac = 0xffffff;
  local_b8 = 0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_3c = 0xffffff;
  local_48 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_78 = 4;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0a848);
  local_148 = (longlong *)CONCAT44(uRam0000000141dc6dd4,_DAT_141dc6dd0);
  uStack_140 = uRam0000000141dc6dd8;
  uStack_13c = uRam0000000141dc6ddc;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_148);
  local_a8 = local_108;
  ppuVar9 = &local_a8;
  uVar7 = CONCAT44(uVar8,DAT_141a0a0d8);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_128,1,uVar7,ppuVar9);
  iVar1 = FUN_140e851f0(uVar4,uVar5,DAT_141955260,1);
  if (iVar1 == -2 || 0 < iVar1) {
    local_78 = 9;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    uVar8 = (undefined4)(uVar7 >> 0x20);
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0a848);
    local_148 = (longlong *)CONCAT44(uRam0000000141dc6dd4,_DAT_141dc6dd0);
    uStack_140 = uRam0000000141dc6dd8;
    uStack_13c = uRam0000000141dc6ddc;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_148);
    local_a8 = local_108;
    ppuVar9 = &local_a8;
    uVar7 = CONCAT44(uVar8,DAT_141a0a0d8);
    puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_128,1,uVar7,ppuVar9);
    uStack_12c = *(undefined4 *)((longlong)puVar6 + 0xc);
    uStack_130 = *(undefined4 *)(puVar6 + 1);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) == 0) {
      local_138 = (longlong *)*puVar6;
    }
    else {
      FUN_1400419b0(&local_138,puVar6);
    }
    uStack_13c = 7;
    local_148 = (longlong *)CONCAT44(local_148._4_4_,2);
    FUN_140042560(&local_138,&local_148);
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    uVar2 = FUN_140e851f0(uVar4,&local_138,DAT_141955260,1);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    if (uVar2 < 0x80000000) {
      local_78 = 0xb;
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      local_118 = 0;
      local_110 = 0;
      local_10c = 5;
      uStack_13c = 6;
      uVar7 = uVar7 & 0xffffffffffffff00;
      local_148 = param_1;
      FUN_140e87440(&local_148,DAT_141a0f7f8,0x80000000,&local_58,uVar7,
                    (ulonglong)ppuVar9 & 0xffffffffffffff00);
      uVar8 = (undefined4)(uVar7 >> 0x20);
      if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      local_148 = (longlong *)local_58;
      uStack_140 = uStack_50;
      uStack_13c = uStack_4c;
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_f8);
      }
      FUN_140041b80(local_f8,&local_148);
      local_a0 = local_f8;
      local_148 = (longlong *)CONCAT44(uRam0000000141dc6dd4,_DAT_141dc6dd0);
      uStack_140 = uRam0000000141dc6dd8;
      uStack_13c = uRam0000000141dc6ddc;
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_e8);
      }
      FUN_140041b80(local_e8,&local_148);
      local_98 = local_e8;
      uStack_12c = 0;
      local_138 = (longlong *)0x3fb999999999999a;
      FUN_140042560(&local_138,uVar3);
      local_148 = local_138;
      uStack_140 = uStack_130;
      uStack_13c = uStack_12c;
      if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_d8);
      }
      FUN_140041b80(local_d8,&local_148);
      if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      local_90 = local_d8;
      ppuVar9 = &local_a0;
      uVar7 = CONCAT44(uVar8,DAT_141a00c58);
      puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_118,3,uVar7,ppuVar9);
      if (puVar6 != &local_b8) {
        local_148 = (longlong *)*puVar6;
        uStack_140 = *(undefined4 *)(puVar6 + 1);
        uStack_13c = *(undefined4 *)((longlong)puVar6 + 0xc);
        if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_b8);
        }
        FUN_140041b80(&local_b8,&local_148);
      }
      FUN_140e86fa0(param_1,DAT_141a0f7f8,0x80000000,&local_b8);
      local_78 = 0xc;
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      local_128 = 0;
      local_120 = 0;
      local_11c = 5;
      uStack_13c = 6;
      uVar7 = uVar7 & 0xffffffffffffff00;
      local_148 = param_1;
      FUN_140e87440(&local_148,DAT_141a0f938,0x80000000,&local_68,uVar7,
                    (ulonglong)ppuVar9 & 0xffffffffffffff00);
      uVar8 = (undefined4)(uVar7 >> 0x20);
      if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      local_148 = (longlong *)local_68;
      uStack_140 = uStack_60;
      uStack_13c = uStack_5c;
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_148);
      local_a8 = local_108;
      local_148 = (longlong *)CONCAT44(uRam0000000141dc6dd4,_DAT_141dc6dd0);
      uStack_140 = uRam0000000141dc6dd8;
      uStack_13c = uRam0000000141dc6ddc;
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_f8);
      }
      FUN_140041b80(local_f8,&local_148);
      local_a0 = local_f8;
      uStack_12c = 0;
      local_138 = (longlong *)0x3fb999999999999a;
      FUN_140042560(&local_138,uVar3);
      local_148 = local_138;
      uStack_140 = uStack_130;
      uStack_13c = uStack_12c;
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_e8);
      }
      FUN_140041b80(local_e8,&local_148);
      if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      local_98 = local_e8;
      ppuVar9 = &local_a8;
      uVar7 = CONCAT44(uVar8,DAT_141a00c58);
      puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_128,3,uVar7,ppuVar9);
      if (puVar6 != &local_c8) {
        local_148 = (longlong *)*puVar6;
        uStack_140 = *(undefined4 *)(puVar6 + 1);
        uStack_13c = *(undefined4 *)((longlong)puVar6 + 0xc);
        if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c8);
        }
        FUN_140041b80(&local_c8,&local_148);
      }
      FUN_140e86fa0(param_1,DAT_141a0f938,0x80000000,&local_c8);
      local_78 = 0xe;
      uStack_13c = 6;
      local_148 = param_1;
      FUN_140e87440(&local_148,DAT_141a0cfc8,0x80000000,&local_48,uVar7 & 0xffffffffffffff00,
                    (ulonglong)ppuVar9 & 0xffffffffffffff00);
      if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      uStack_13c = 0;
      local_148 = (longlong *)0x3fb999999999999a;
      iVar1 = FUN_140e851f0(&local_48,&local_148,DAT_141955260,1);
      if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      if (iVar1 != -2 && iVar1 < 1) {
        local_78 = 0xf;
        FUN_140edd0e0(param_1,param_2,0,0);
      }
    }
  }
  else {
    local_78 = 6;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_118 = 0;
    local_110 = 0;
    local_10c = 5;
    uStack_12c = 6;
    uVar7 = uVar7 & 0xffffffffffffff00;
    local_138 = param_1;
    FUN_140e87440(&local_138,DAT_141a0f7f8,0x80000000,&local_58,uVar7,
                  (ulonglong)ppuVar9 & 0xffffffffffffff00);
    uVar8 = (undefined4)(uVar7 >> 0x20);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_148 = (longlong *)local_58;
    uStack_140 = uStack_50;
    uStack_13c = uStack_4c;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_148);
    local_a0 = local_f8;
    local_148 = (longlong *)CONCAT44(uRam00000001419ea1b4,_DAT_1419ea1b0);
    uStack_140 = uRam00000001419ea1b8;
    uStack_13c = uRam00000001419ea1bc;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_148);
    local_98 = local_e8;
    uStack_12c = 0;
    local_138 = (longlong *)0x3fb999999999999a;
    FUN_140042560(&local_138,uVar3);
    local_148 = local_138;
    uStack_140 = uStack_130;
    uStack_13c = uStack_12c;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_148);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_90 = local_d8;
    ppuVar9 = &local_a0;
    uVar7 = CONCAT44(uVar8,DAT_141a00c58);
    puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_118,3,uVar7,ppuVar9);
    if (puVar6 != &local_b8) {
      local_148 = (longlong *)*puVar6;
      uStack_140 = *(undefined4 *)(puVar6 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      FUN_140041b80(&local_b8,&local_148);
    }
    FUN_140e86fa0(param_1,DAT_141a0f7f8,0x80000000,&local_b8);
    local_78 = 7;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    uStack_12c = 6;
    uVar7 = uVar7 & 0xffffffffffffff00;
    local_138 = param_1;
    FUN_140e87440(&local_138,DAT_141a0f938,0x80000000,&local_68,uVar7,
                  (ulonglong)ppuVar9 & 0xffffffffffffff00);
    uVar8 = (undefined4)(uVar7 >> 0x20);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_148 = (longlong *)local_68;
    uStack_140 = uStack_60;
    uStack_13c = uStack_5c;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_148);
    local_a8 = local_108;
    local_148 = (longlong *)CONCAT44(uRam00000001419ea1b4,_DAT_1419ea1b0);
    uStack_140 = uRam00000001419ea1b8;
    uStack_13c = uRam00000001419ea1bc;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_148);
    local_a0 = local_f8;
    uStack_12c = 0;
    local_138 = (longlong *)0x3fb999999999999a;
    FUN_140042560(&local_138,uVar3);
    local_148 = local_138;
    uStack_140 = uStack_130;
    uStack_13c = uStack_12c;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_148);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_98 = local_e8;
    puVar6 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_128,3,CONCAT44(uVar8,DAT_141a00c58),&local_a8);
    if (puVar6 != &local_c8) {
      local_148 = (longlong *)*puVar6;
      uStack_140 = *(undefined4 *)(puVar6 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      FUN_140041b80(&local_c8,&local_148);
    }
    FUN_140e86fa0(param_1,DAT_141a0f938,0x80000000,&local_c8);
  }
  local_78 = 0x12;
  uVar4 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
  FUN_140e609c0(param_1);
  FUN_1400460e0(uVar4,uVar3);
  FUN_140e60910(1);
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  _eh_vector_destructor_iterator_(local_108,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return;
}

