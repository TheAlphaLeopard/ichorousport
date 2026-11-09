// gml_Script_BM_NEW_MENU @ 0x140257dc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * gml_Script_BM_NEW_MENU
                   (longlong *param_1,undefined8 param_2,double *param_3,undefined4 param_4,
                   undefined8 param_5)

{
  double dVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  double *pdVar8;
  longlong *plVar9;
  ulonglong uVar10;
  double local_e8;
  uint local_dc;
  longlong local_d8;
  uint local_cc;
  double local_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  double local_b8;
  double dStack_b0;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  double local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  uint local_48 [2];
  undefined8 *local_40;
  
  local_a0 = "gml_Script_anon@15165@BM_NEW_MENU@BYTEMAP_menu_manager";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 0x1a8;
  FUN_140041df0(local_48,param_4,1,param_5);
  local_4c = 0xffffff;
  local_58 = 0;
  uStack_bc = 0xffffff;
  local_c8 = 0.0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0.0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  uStack_7c = 0xffffff;
  local_88 = 0.0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0.0;
  local_98 = 0x1a8;
  puVar7 = &DAT_1419df7b0;
  uVar10 = (ulonglong)local_48[0];
  if ((int)local_48[0] < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*local_40;
  }
  iVar3 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if ((iVar3 == 0) &&
     ((local_98 = 0x1a8, (int)local_48[0] < 1 ||
      (puVar7 = (undefined8 *)*local_40, puVar7 != (undefined8 *)&DAT_141dce048)))) {
    local_b8 = _DAT_141dce048;
    dStack_b0 = (double)uRam0000000141dce050;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_b8);
  }
  local_98 = 0x1a9;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a54fa0);
  FUN_140e87440(uVar5,DAT_141a46948,0x80000000,&local_58,0,0);
  FUN_140e87440(uVar5,DAT_141a465e8,0x80000000,&local_c8,0,0);
  iVar3 = FUN_140e4a740(&local_58);
  pdVar8 = (double *)0x0;
  if (((uStack_bc & 0xffffff) == 2) && (local_c8 != 0.0)) {
    if ((iVar3 < 0) || (*(int *)((longlong)local_c8 + 0x24) <= iVar3)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                    *(undefined4 *)((longlong)local_c8 + 0x24));
    }
    else {
      pdVar8 = (double *)((longlong)iVar3 * 0x10 + *(longlong *)((longlong)local_c8 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    pdVar8 = &local_c8;
  }
  if (((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 2) && (dVar1 = *pdVar8, dVar1 != 0.0)) {
    if (*(int *)((longlong)dVar1 + 0x24) < 2) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
      pdVar8 = (double *)0x0;
    }
    else {
      pdVar8 = (double *)(*(longlong *)((longlong)dVar1 + 8) + 0x10);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (pdVar8 != &local_c8) {
    local_b8 = *pdVar8;
    dStack_b0 = pdVar8[1];
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_b8);
  }
  dStack_b0 = (double)CONCAT44(uStack_bc,uStack_c0);
  local_b8 = local_c8;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140041b80(&local_d8,&local_b8);
  local_98 = 0x1ab;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_dc = 0;
  local_e8 = 0.0;
  bVar2 = true;
  do {
    if (!bVar2) {
      local_98 = 0x1ab;
      uVar4 = local_dc & 0xffffff;
      if (uVar4 != 0) {
        if (uVar4 != 1) {
          if (uVar4 == 7) {
            local_e8 = (double)CONCAT44(local_e8._4_4_,local_e8._0_4_ + 1);
          }
          else if (uVar4 == 10) {
            local_e8 = (double)((longlong)local_e8 + 1);
          }
          else {
            if (uVar4 == 0xd) goto LAB_140258116;
            FUN_140042910(&DAT_14172c3d8,&local_e8,&local_e8);
          }
          goto LAB_140258125;
        }
        local_e8 = (double)FUN_140e4b060(&local_e8);
LAB_140258116:
        local_dc = 0;
      }
      local_e8 = local_e8 + 1.0;
    }
LAB_140258125:
    bVar2 = false;
    iVar3 = 0;
    if ((local_cc == 2) && (local_d8 != 0)) {
      iVar3 = *(int *)(local_d8 + 0x24);
    }
    dStack_b0 = (double)((ulonglong)dStack_b0 & 0xffffffff);
    local_b8 = (double)iVar3;
    iVar3 = FUN_140e851f0(&local_e8,&local_b8,DAT_141955260,1);
    if ((1 << ((byte)((ulonglong)dStack_b0 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    if (iVar3 == -2 || -1 < iVar3) {
      local_98 = 0x1b1;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      *(undefined4 *)((longlong)param_3 + 0xc) = 6;
      *param_3 = (double)param_1;
      uVar5 = FUN_140e5c910();
      FUN_140e42c10(uVar5,param_1);
      goto LAB_14025837c;
    }
    local_98 = 0x1ad;
    iVar3 = FUN_140e4a740(&local_e8);
    plVar9 = (longlong *)0x0;
    if (((local_cc & 0xffffff) == 2) && (local_d8 != 0)) {
      if ((iVar3 < 0) || (*(int *)(local_d8 + 0x24) <= iVar3)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                      *(undefined4 *)(local_d8 + 0x24));
      }
      else {
        plVar9 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(local_d8 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      plVar9 = &local_d8;
    }
    FUN_140e87440(plVar9,DAT_141a46988,0x80000000,&local_68,0,0);
    FUN_140e87440(&local_68,DAT_141a46588,0x80000000,&local_78,0,0);
    if ((int)local_48[0] < 1) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)*local_40;
    }
    iVar3 = FUN_140e851f0(&local_78,puVar7,DAT_141955260,0);
    if (iVar3 == 0) {
      local_98 = 0x1ae;
      iVar3 = FUN_140e4a740(&local_e8);
      plVar9 = (longlong *)0x0;
      if (((local_cc & 0xffffff) == 2) && (local_d8 != 0)) {
        if ((iVar3 < 0) || (*(int *)(local_d8 + 0x24) <= iVar3)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                        *(undefined4 *)(local_d8 + 0x24));
        }
        else {
          plVar9 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(local_d8 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        plVar9 = &local_d8;
      }
      FUN_140e87440(plVar9,DAT_141a46aa8,0x80000000,&local_88,0,0);
      if (&local_88 != param_3) {
        dStack_b0 = (double)CONCAT44(uStack_7c,uStack_80);
        local_b8 = local_88;
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_b8);
      }
LAB_14025837c:
      if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_68);
      }
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_58);
      }
      if (0 < (int)local_48[0]) {
        puVar7 = local_40;
        do {
          puVar6 = (undefined8 *)*puVar7;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar6);
          }
          *puVar6 = 0;
          *(undefined4 *)(puVar6 + 1) = 0;
          *(undefined4 *)((longlong)puVar6 + 0xc) = 5;
          puVar7 = puVar7 + 1;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      FUN_140e4cd60(local_40);
      DAT_141dc7a50 = (undefined8 *)local_a8;
      return param_3;
    }
  } while( true );
}

