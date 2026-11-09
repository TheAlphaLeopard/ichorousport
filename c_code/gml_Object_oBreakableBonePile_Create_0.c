// gml_Object_oBreakableBonePile_Create_0 @ 0x1408483b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oBreakableBonePile_Create_0(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 **ppuVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  undefined4 uVar12;
  ulonglong uVar11;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8 [3];
  byte local_bc;
  undefined4 local_b8 [3];
  byte local_ac;
  undefined4 local_a8 [3];
  byte local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 *local_78;
  undefined4 *local_70;
  undefined4 *local_68;
  undefined8 local_60;
  char *local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_58 = "gml_Object_oBossUi_Step_0";
  local_50 = 0;
  local_60 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_60;
  uVar12 = 1;
  _eh_vector_constructor_iterator_(local_c8,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_2c = 0xffffff;
  local_38 = 0;
  local_3c = 0xffffff;
  local_48 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_50 = 2;
  plVar4 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a09ee8);
  if (((*(int *)((longlong)plVar4 + 0xc) != 2) || (*plVar4 == 0)) || (*(int *)(*plVar4 + 0x24) == 0)
     ) {
    local_50 = 4;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    uStack_7c = 0xf;
    local_88 = 0x100000000000025;
    local_d8 = 0x25;
    uStack_d4 = 0x1000000;
    uStack_d0 = uStack_80;
    uStack_cc = 0xf;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_d8);
    local_78 = local_c8;
    ppuVar8 = &local_78;
    uVar11 = CONCAT44(uVar12,DAT_141a02ef8);
    uVar5 = FUN_140e634e0(param_1,param_2,&local_e8,1,uVar11,ppuVar8);
    cVar2 = FUN_140e491e0(uVar5);
    if (cVar2 == '\0') {
      local_50 = 7;
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      uVar12 = (undefined4)(uVar11 >> 0x20);
      local_e8 = 0;
      local_e0 = 0;
      local_dc = 5;
      puVar6 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a09ef8);
      puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a09f68);
      if (puVar6 != local_c8) {
        local_d8 = *puVar6;
        uStack_d4 = puVar6[1];
        uStack_d0 = puVar6[2];
        uStack_cc = puVar6[3];
        if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_c8);
        }
        FUN_140041b80(local_c8,&local_d8);
      }
      local_78 = local_c8;
      local_d8 = _DAT_141dd6fe8;
      uStack_d4 = uRam0000000141dd6fec;
      uStack_d0 = uRam0000000141dd6ff0;
      uStack_cc = DAT_141dd6ff4;
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_b8);
      }
      FUN_140041b80(local_b8,&local_d8);
      local_70 = local_b8;
      FUN_140e609c0(param_1);
      ppuVar8 = &local_78;
      puVar10 = &local_e8;
    }
    else {
      local_50 = 5;
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      local_98 = 0;
      local_90 = 0;
      local_8c = 5;
      puVar6 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a09ef8);
      puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a09f68);
      uStack_7c = 0xf;
      local_88 = 0x100000000000025;
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_140e87440(&local_88,DAT_141a05b88,0x80000000,&local_38,uVar11,
                    (ulonglong)ppuVar8 & 0xffffffffffffff00);
      uVar12 = (undefined4)(uVar11 >> 0x20);
      if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      if (puVar6 != local_b8) {
        local_d8 = *puVar6;
        uStack_d4 = puVar6[1];
        uStack_d0 = puVar6[2];
        uStack_cc = puVar6[3];
        if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_b8);
        }
        FUN_140041b80(local_b8,&local_d8);
      }
      local_70 = local_b8;
      local_d8 = (undefined4)local_38;
      uStack_d4 = local_38._4_4_;
      uStack_d0 = uStack_30;
      uStack_cc = uStack_2c;
      if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_a8);
      }
      FUN_140041b80(local_a8,&local_d8);
      local_68 = local_a8;
      FUN_140e609c0(param_1);
      ppuVar8 = &local_70;
      puVar10 = &local_98;
    }
    uVar11 = CONCAT44(uVar12,DAT_1419fd6d8);
    puVar6 = (undefined4 *)FUN_140e634e0(param_1,param_2,puVar10,2,uVar11,ppuVar8);
    if (puVar6 != puVar7) {
      local_d8 = *puVar6;
      uStack_d4 = puVar6[1];
      uStack_d0 = puVar6[2];
      uStack_cc = puVar6[3];
      if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_d8);
    }
    FUN_140e60910(1);
    local_50 = 9;
    uStack_7c = 0xf;
    local_88 = 0x100000000000025;
    dVar1 = (double)FUN_140e4b060(&local_88);
    iVar3 = FUN_140edd1e0(param_1,param_2,(int)dVar1);
    if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    if (1 < iVar3) {
      local_50 = 0xb;
      uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a09f68);
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_140e87440(uVar5,DAT_141a09ed8,0x80000000,&local_48,uVar11,
                    (ulonglong)ppuVar8 & 0xffffffffffffff00);
      FUN_1400460e0(&local_48,&DAT_141dd6fd8);
      FUN_140e87930(uVar5,DAT_141a09ed8,0x80000000,&local_48);
    }
    uVar12 = (undefined4)(uVar11 >> 0x20);
    local_50 = 0xf;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    local_98 = 0;
    local_90 = 0;
    local_8c = 5;
    puVar7 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a09ef8);
    puVar6 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a09f58);
    if (puVar7 != local_c8) {
      local_d8 = *puVar7;
      uStack_d4 = puVar7[1];
      uStack_d0 = puVar7[2];
      uStack_cc = puVar7[3];
      if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_c8);
      }
      FUN_140041b80(local_c8,&local_d8);
    }
    local_78 = local_c8;
    local_d8 = _DAT_141dd6fc8;
    uStack_d4 = uRam0000000141dd6fcc;
    uStack_d0 = uRam0000000141dd6fd0;
    uStack_cc = DAT_141dd6fd4;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_d8);
    local_70 = local_b8;
    uVar5 = CONCAT44(uVar12,DAT_1419fd6d8);
    puVar7 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_98,2,uVar5,&local_78);
    uVar12 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (puVar7 != local_a8) {
      local_d8 = *puVar7;
      uStack_d4 = puVar7[1];
      uStack_d0 = puVar7[2];
      uStack_cc = puVar7[3];
      if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_a8);
      }
      FUN_140041b80(local_a8,&local_d8);
    }
    local_68 = local_a8;
    FUN_140e609c0(param_1);
    uVar5 = CONCAT44(uVar12,DAT_1419fdca8);
    puVar7 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_e8,1,uVar5,&local_68);
    uVar12 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (puVar7 != puVar6) {
      local_d8 = *puVar7;
      uStack_d4 = puVar7[1];
      uStack_d0 = puVar7[2];
      uStack_cc = puVar7[3];
      if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_d8);
    }
    FUN_140e60910(1);
    local_50 = 0x11;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    puVar7 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a09f58);
    puVar6 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a09eb8);
    puVar9 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a09ee8);
    if (puVar7 != local_c8) {
      local_d8 = *puVar7;
      uStack_d4 = puVar7[1];
      uStack_d0 = puVar7[2];
      uStack_cc = puVar7[3];
      if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_c8);
      }
      FUN_140041b80(local_c8,&local_d8);
    }
    local_78 = local_c8;
    if (puVar6 != local_b8) {
      local_d8 = *puVar6;
      uStack_d4 = puVar6[1];
      uStack_d0 = puVar6[2];
      uStack_cc = puVar6[3];
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_b8);
      }
      FUN_140041b80(local_b8,&local_d8);
    }
    local_70 = local_b8;
    FUN_140e609c0(param_1);
    uVar5 = CONCAT44(uVar12,DAT_1419ff868);
    puVar7 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_e8,2,uVar5,&local_78);
    uVar12 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (puVar7 != puVar9) {
      local_d8 = *puVar7;
      uStack_d4 = puVar7[1];
      uStack_d0 = puVar7[2];
      uStack_cc = puVar7[3];
      if ((1 << ((byte)puVar9[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar9);
      }
      FUN_140041b80(puVar9,&local_d8);
    }
    FUN_140e60910(1);
    local_50 = 0x13;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    puVar7 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a09ee8);
    puVar6 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a09f68);
    if (puVar7 != local_c8) {
      local_d8 = *puVar7;
      uStack_d4 = puVar7[1];
      uStack_d0 = puVar7[2];
      uStack_cc = puVar7[3];
      if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_c8);
      }
      FUN_140041b80(local_c8,&local_d8);
    }
    local_78 = local_c8;
    if (puVar6 != local_b8) {
      local_d8 = *puVar6;
      uStack_d4 = puVar6[1];
      uStack_d0 = puVar6[2];
      uStack_cc = puVar6[3];
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_b8);
      }
      FUN_140041b80(local_b8,&local_d8);
    }
    local_70 = local_b8;
    FUN_140e634e0(param_1,param_2,&local_e8,2,CONCAT44(uVar12,DAT_1419fe568),&local_78);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)uStack_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  _eh_vector_destructor_iterator_(local_c8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_60;
  return;
}

