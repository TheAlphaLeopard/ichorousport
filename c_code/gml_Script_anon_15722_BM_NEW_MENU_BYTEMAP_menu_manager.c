// gml_Script_anon_15722_BM_NEW_MENU_BYTEMAP_menu_manager @ 0x140257540

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_15722_BM_NEW_MENU_BYTEMAP_menu_manager
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  bool bVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double local_148;
  uint local_13c;
  longlong local_138;
  uint local_12c;
  longlong local_128;
  undefined4 uStack_120;
  uint uStack_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  undefined8 local_e8;
  longlong lStack_e0;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  double local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  uint local_68 [2];
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  local_100 = "gml_Script_anon@14565@BM_NEW_MENU@BYTEMAP_menu_manager";
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  local_f8 = 0x194;
  FUN_140041df0(local_68,param_4,1,param_5);
  local_9c = 0xffffff;
  local_a8 = 0;
  uStack_11c = 0xffffff;
  local_128 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_13c = 0xffffff;
  local_148 = 0.0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_f8 = 0x194;
  puVar9 = &DAT_1419df7b0;
  uVar11 = (ulonglong)local_68[0];
  if ((int)local_68[0] < 1) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)*local_60;
  }
  iVar5 = FUN_140e851f0(puVar8,&DAT_1419df7b0,DAT_141955260,0);
  if ((iVar5 == 0) &&
     ((local_f8 = 0x194, (int)local_68[0] < 1 ||
      (puVar9 = (undefined8 *)*local_60, puVar9 != (undefined8 *)&DAT_141dce048)))) {
    local_e8 = _DAT_141dce048;
    lStack_e0 = uRam0000000141dce050;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    FUN_140041b80(puVar9,&local_e8);
  }
  local_f8 = 0x196;
  uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a54fa0);
  FUN_140e87440(uVar7,DAT_141a46948,0x80000000,&local_a8,0,0);
  FUN_140e87440(uVar7,DAT_141a465e8,0x80000000,&local_128,0,0);
  iVar5 = FUN_140e4a740(&local_a8);
  plVar10 = (longlong *)0x0;
  if (((uStack_11c & 0xffffff) == 2) && (local_128 != 0)) {
    if ((iVar5 < 0) || (*(int *)(local_128 + 0x24) <= iVar5)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                    *(undefined4 *)(local_128 + 0x24));
    }
    else {
      plVar10 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(local_128 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    plVar10 = &local_128;
  }
  if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar10, lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x24) < 2) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
      plVar10 = (longlong *)0x0;
    }
    else {
      plVar10 = (longlong *)(*(longlong *)(lVar1 + 8) + 0x10);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (plVar10 != &local_128) {
    local_e8 = *plVar10;
    lStack_e0 = plVar10[1];
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_e8);
  }
  lStack_e0 = CONCAT44(uStack_11c,uStack_120);
  local_e8 = local_128;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_e8);
  local_f8 = 0x198;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_13c = 0;
  local_148 = 0.0;
  bVar2 = true;
  do {
    if (!bVar2) {
      local_f8 = 0x198;
      uVar6 = local_13c & 0xffffff;
      if (uVar6 != 0) {
        if (uVar6 != 1) {
          if (uVar6 == 7) {
            local_148 = (double)CONCAT44(local_148._4_4_,local_148._0_4_ + 1);
          }
          else if (uVar6 == 10) {
            local_148 = (double)((longlong)local_148 + 1);
          }
          else {
            if (uVar6 == 0xd) {
              local_13c = 0;
              goto LAB_1402578b6;
            }
            FUN_140042910(&DAT_14172c3d8,&local_148,&local_148);
          }
          goto LAB_1402578c0;
        }
        local_148 = (double)FUN_140e4b060(&local_148);
        local_13c = 0;
      }
LAB_1402578b6:
      local_148 = local_148 + 1.0;
    }
LAB_1402578c0:
    bVar2 = false;
    iVar5 = 0;
    if ((local_12c == 2) && (local_138 != 0)) {
      iVar5 = *(int *)(local_138 + 0x24);
    }
    local_8c = 0;
    local_98 = (double)iVar5;
    iVar5 = FUN_140e851f0(&local_148,&local_98,DAT_141955260,1);
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    if (iVar5 == -2 || -1 < iVar5) {
      local_f8 = 0x1a2;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      *(undefined4 *)((longlong)param_3 + 0xc) = 6;
      *param_3 = param_1;
      uVar7 = FUN_140e5c910();
      FUN_140e42c10(uVar7,param_1);
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      if (0 < (int)local_68[0]) {
        puVar9 = local_60;
        do {
          puVar8 = (undefined8 *)*puVar9;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar8);
          }
          *puVar8 = 0;
          *(undefined4 *)(puVar8 + 1) = 0;
          *(undefined4 *)((longlong)puVar8 + 0xc) = 5;
          puVar9 = puVar9 + 1;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      FUN_140e4cd60(local_60);
      DAT_141dc7a50 = (undefined8 *)local_108;
      return param_3;
    }
    local_f8 = 0x19a;
    iVar5 = FUN_140e4a740(&local_148);
    plVar10 = (longlong *)0x0;
    if (((local_12c & 0xffffff) == 2) && (local_138 != 0)) {
      if ((iVar5 < 0) || (*(int *)(local_138 + 0x24) <= iVar5)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                      *(undefined4 *)(local_138 + 0x24));
      }
      else {
        plVar10 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(local_138 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      plVar10 = &local_138;
    }
    FUN_140e87440(plVar10,DAT_141a46988,0x80000000,&local_b8,0,0);
    FUN_140e87440(&local_b8,DAT_141a46588,0x80000000,&local_c8,0,0);
    if ((int)local_68[0] < 1) {
      puVar9 = &DAT_1419df7b0;
    }
    else {
      puVar9 = (undefined8 *)*local_60;
    }
    iVar5 = FUN_140e851f0(&local_c8,puVar9,DAT_141955260,0);
    if (iVar5 == 0) {
      local_f8 = 0x19b;
      iVar5 = FUN_140e4a740(&local_148);
      plVar10 = (longlong *)0x0;
      if (((local_12c & 0xffffff) == 2) && (local_138 != 0)) {
        if ((iVar5 < 0) || (*(int *)(local_138 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                        *(undefined4 *)(local_138 + 0x24));
        }
        else {
          plVar10 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(local_138 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        plVar10 = &local_138;
      }
      FUN_140e87440(plVar10,DAT_141a46ac8,0x80000000,&local_d8,0,0);
      local_7c = 0xd;
      local_88 = 0x3ff0000000000000;
      iVar5 = FUN_140e851f0(&local_d8,&local_88,DAT_141955260,0);
      uVar7 = extraout_XMM0_Qb;
      if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
        uVar7 = extraout_XMM0_Qb_00;
      }
      if (iVar5 == 0) {
        local_f8 = 0x19c;
        auVar3._4_8_ = uVar7;
        auVar3._0_4_ = local_58._4_4_;
        auVar12._0_8_ = auVar3._0_8_ << 0x20;
        auVar12._8_4_ = (undefined4)uStack_50;
        auVar12._12_4_ = 0xd;
        uStack_70 = auVar12._8_8_;
        local_58 = 0;
        local_78 = 0;
        uStack_50 = uStack_70;
        if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        FUN_140041b80(&local_118,&local_78);
      }
      else {
        local_f8 = 0x19e;
        auVar4._4_8_ = uVar7;
        auVar4._0_4_ = local_e8._4_4_;
        auVar13._0_8_ = auVar4._0_8_ << 0x20;
        auVar13._8_4_ = (undefined4)lStack_e0;
        auVar13._12_4_ = 0xd;
        lStack_e0 = auVar13._8_8_;
        local_e8 = 0x3ff0000000000000;
        local_78 = 0x3ff0000000000000;
        uStack_70 = lStack_e0;
        if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        FUN_140041b80(&local_118,&local_78);
      }
      iVar5 = FUN_140e4a740(&local_148);
      plVar10 = (longlong *)0x0;
      if (((local_12c & 0xffffff) == 2) && (local_138 != 0)) {
        if ((iVar5 < 0) || (*(int *)(local_138 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                        *(undefined4 *)(local_138 + 0x24));
        }
        else {
          plVar10 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(local_138 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        plVar10 = &local_138;
      }
      FUN_140e87930(plVar10,DAT_141a46ac8,0x80000000,&local_118);
    }
  } while( true );
}

