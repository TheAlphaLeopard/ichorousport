// gml_Script_anon_13943_BM_NEW_MENU_BYTEMAP_menu_manager @ 0x140255c60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_13943_BM_NEW_MENU_BYTEMAP_menu_manager
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  double local_138;
  uint local_12c;
  longlong local_128;
  uint local_11c;
  longlong local_118;
  undefined4 uStack_110;
  uint uStack_10c;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  double local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  uint local_68 [2];
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  local_100 = "gml_Script_anon@12797@BM_NEW_MENU@BYTEMAP_menu_manager";
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  local_f8 = 0x15c;
  FUN_140041df0(local_68,param_4,1,param_5);
  local_8c = 0xffffff;
  local_98 = 0;
  uStack_10c = 0xffffff;
  local_118 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_12c = 0xffffff;
  local_138 = 0.0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_f8 = 0x15c;
  puVar7 = &DAT_1419df7b0;
  uVar9 = (ulonglong)local_68[0];
  if ((int)local_68[0] < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*local_60;
  }
  iVar3 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if ((iVar3 == 0) &&
     ((local_f8 = 0x15c, (int)local_68[0] < 1 ||
      (puVar7 = (undefined8 *)*local_60, puVar7 != (undefined8 *)&DAT_141dce048)))) {
    local_e8 = _DAT_141dce048;
    uStack_e0 = uRam0000000141dce050;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_e8);
  }
  local_f8 = 0x15e;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a54fa0);
  FUN_140e87440(uVar5,DAT_141a46948,0x80000000,&local_98,0,0);
  FUN_140e87440(uVar5,DAT_141a465e8,0x80000000,&local_118,0,0);
  iVar3 = FUN_140e4a740(&local_98);
  plVar8 = (longlong *)0x0;
  if (((uStack_10c & 0xffffff) == 2) && (local_118 != 0)) {
    if ((iVar3 < 0) || (*(int *)(local_118 + 0x24) <= iVar3)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                    *(undefined4 *)(local_118 + 0x24));
    }
    else {
      plVar8 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(local_118 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    plVar8 = &local_118;
  }
  if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar8, lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x24) < 2) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)(*(longlong *)(lVar1 + 8) + 0x10);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (plVar8 != &local_118) {
    local_e8 = *plVar8;
    uStack_e0 = plVar8[1];
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_e8);
  }
  uStack_e0 = CONCAT44(uStack_10c,uStack_110);
  local_e8 = local_118;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_e8);
  local_f8 = 0x160;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_12c = 0;
  local_138 = 0.0;
  bVar2 = true;
  do {
    if (!bVar2) {
      local_f8 = 0x160;
      uVar4 = local_12c & 0xffffff;
      if (uVar4 != 0) {
        if (uVar4 != 1) {
          if (uVar4 == 7) {
            local_138 = (double)CONCAT44(local_138._4_4_,local_138._0_4_ + 1);
          }
          else if (uVar4 == 10) {
            local_138 = (double)((longlong)local_138 + 1);
          }
          else {
            if (uVar4 == 0xd) {
              local_12c = 0;
              goto LAB_140255fd8;
            }
            FUN_140042910(&DAT_14172c3d8,&local_138,&local_138);
          }
          goto LAB_140255fe2;
        }
        local_138 = (double)FUN_140e4b060(&local_138);
        local_12c = 0;
      }
LAB_140255fd8:
      local_138 = local_138 + 1.0;
    }
LAB_140255fe2:
    bVar2 = false;
    iVar3 = 0;
    if ((local_11c == 2) && (local_128 != 0)) {
      iVar3 = *(int *)(local_128 + 0x24);
    }
    local_7c = 0;
    local_88 = (double)iVar3;
    iVar3 = FUN_140e851f0(&local_138,&local_88,DAT_141955260,1);
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    if (iVar3 == -2 || -1 < iVar3) {
      local_f8 = 0x168;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      *(undefined4 *)((longlong)param_3 + 0xc) = 6;
      *param_3 = param_1;
      uVar5 = FUN_140e5c910();
      FUN_140e42c10(uVar5,param_1);
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      if (0 < (int)local_68[0]) {
        puVar7 = local_60;
        do {
          puVar6 = (undefined8 *)*puVar7;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar6);
          }
          *puVar6 = 0;
          *(undefined4 *)(puVar6 + 1) = 0;
          *(undefined4 *)((longlong)puVar6 + 0xc) = 5;
          puVar7 = puVar7 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      FUN_140e4cd60(local_60);
      DAT_141dc7a50 = (undefined8 *)local_108;
      return param_3;
    }
    local_f8 = 0x162;
    iVar3 = FUN_140e4a740(&local_138);
    plVar8 = (longlong *)0x0;
    if (((local_11c & 0xffffff) == 2) && (local_128 != 0)) {
      if ((iVar3 < 0) || (*(int *)(local_128 + 0x24) <= iVar3)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                      *(undefined4 *)(local_128 + 0x24));
      }
      else {
        plVar8 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(local_128 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      plVar8 = &local_128;
    }
    FUN_140e87440(plVar8,DAT_141a46988,0x80000000,&local_a8,0,0);
    FUN_140e87440(&local_a8,DAT_141a46588,0x80000000,&local_b8,0,0);
    if ((int)local_68[0] < 1) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)*local_60;
    }
    iVar3 = FUN_140e851f0(&local_b8,puVar7,DAT_141955260,0);
    if (iVar3 == 0) {
      local_f8 = 0x163;
      iVar3 = FUN_140e4a740(&local_138);
      plVar8 = (longlong *)0x0;
      if (((local_11c & 0xffffff) == 2) && (local_128 != 0)) {
        if ((iVar3 < 0) || (*(int *)(local_128 + 0x24) <= iVar3)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                        *(undefined4 *)(local_128 + 0x24));
        }
        else {
          plVar8 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(local_128 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        plVar8 = &local_128;
      }
      FUN_140e87440(plVar8,DAT_141a46c88,0x80000000,&local_c8,0,0);
      local_6c = 0xd;
      local_78 = 0;
      iVar3 = FUN_140e851f0(&local_c8,&local_78,DAT_141955260,0);
      if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      if (iVar3 == 0) {
        local_f8 = 0x164;
        local_e8 = 0x3ff0000000000000;
        uStack_e0 = CONCAT44(0xd,(undefined4)uStack_e0);
        local_58 = 0;
        uStack_54 = 0x3ff00000;
        uStack_50 = (undefined4)uStack_e0;
        uStack_4c = 0xd;
        if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d8);
        }
        FUN_140041b80(&local_d8,&local_58);
        iVar3 = FUN_140e4a740(&local_138);
        plVar8 = (longlong *)0x0;
        if (((local_11c & 0xffffff) == 2) && (local_128 != 0)) {
          if ((iVar3 < 0) || (*(int *)(local_128 + 0x24) <= iVar3)) {
            FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                          *(undefined4 *)(local_128 + 0x24));
          }
          else {
            plVar8 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(local_128 + 8));
          }
        }
        else {
          FUN_140e632c0("trying to index variable that is not an array");
          plVar8 = &local_128;
        }
        FUN_140e87930(plVar8,DAT_141a46c88,0x80000000,&local_d8);
      }
    }
  } while( true );
}

