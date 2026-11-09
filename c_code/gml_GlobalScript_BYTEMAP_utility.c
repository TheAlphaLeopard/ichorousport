// gml_GlobalScript_BYTEMAP_utility @ 0x1402584d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_GlobalScript_BYTEMAP_utility
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  double dVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  double *pdVar8;
  longlong *plVar9;
  ulonglong uVar10;
  double local_108;
  uint local_fc;
  longlong local_f8;
  uint local_ec;
  double local_e8;
  undefined4 uStack_e0;
  uint uStack_dc;
  double local_d8;
  double dStack_d0;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48 [2];
  undefined8 *local_40;
  
  local_c0 = "gml_Script_anon@15722@BM_NEW_MENU@BYTEMAP_menu_manager";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 0x1b8;
  FUN_140041df0(local_48,param_4,2,param_5);
  local_5c = 0xffffff;
  local_68 = 0;
  uStack_dc = 0xffffff;
  local_e8 = 0.0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_fc = 0xffffff;
  local_108 = 0.0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_b8 = 0x1b8;
  uVar10 = (ulonglong)local_48[0];
  if ((int)local_48[0] < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*local_40;
  }
  iVar4 = FUN_140e851f0(puVar7,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
    local_b8 = 0x1b8;
    if ((int)local_48[0] < 1) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)*local_40;
      if (puVar7 == (undefined8 *)&DAT_141dce048) goto LAB_140258634;
    }
    local_d8 = _DAT_141dce048;
    dStack_d0 = (double)uRam0000000141dce050;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_d8);
  }
LAB_140258634:
  if ((int)local_48[0] < 2) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_40[1];
  }
  iVar4 = FUN_140e851f0(puVar7,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
    if ((int)local_48[0] < 2) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)local_40[1];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
    *puVar7 = 0;
  }
  local_b8 = 0x1b9;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a54fa0);
  FUN_140e87440(uVar6,DAT_141a46948,0x80000000,&local_68,0,0);
  FUN_140e87440(uVar6,DAT_141a465e8,0x80000000,&local_e8,0,0);
  iVar4 = FUN_140e4a740(&local_68);
  pdVar8 = (double *)0x0;
  if (((uStack_dc & 0xffffff) == 2) && (local_e8 != 0.0)) {
    if ((iVar4 < 0) || (*(int *)((longlong)local_e8 + 0x24) <= iVar4)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                    *(undefined4 *)((longlong)local_e8 + 0x24));
    }
    else {
      pdVar8 = (double *)((longlong)iVar4 * 0x10 + *(longlong *)((longlong)local_e8 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    pdVar8 = &local_e8;
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
  if (pdVar8 != &local_e8) {
    local_d8 = *pdVar8;
    dStack_d0 = pdVar8[1];
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_d8);
  }
  dStack_d0 = (double)CONCAT44(uStack_dc,uStack_e0);
  local_d8 = local_e8;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_d8);
  local_b8 = 0x1bb;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_fc = 0;
  local_108 = 0.0;
  bVar3 = true;
  do {
    do {
      if (!bVar3) {
        local_b8 = 0x1bb;
        uVar5 = local_fc & 0xffffff;
        if (uVar5 != 0) {
          if (uVar5 != 1) {
            if (uVar5 == 7) {
              local_108 = (double)CONCAT44(local_108._4_4_,local_108._0_4_ + 1);
            }
            else if (uVar5 == 10) {
              local_108 = (double)((longlong)local_108 + 1);
            }
            else {
              if (uVar5 == 0xd) {
                local_fc = 0;
                goto LAB_14025889c;
              }
              FUN_140042910(&DAT_14172c3d8,&local_108,&local_108);
            }
            goto LAB_1402588a6;
          }
          local_108 = (double)FUN_140e4b060(&local_108);
          local_fc = 0;
        }
LAB_14025889c:
        local_108 = local_108 + 1.0;
      }
LAB_1402588a6:
      bVar3 = false;
      iVar4 = 0;
      if ((local_ec == 2) && (local_f8 != 0)) {
        iVar4 = *(int *)(local_f8 + 0x24);
      }
      dStack_d0 = (double)((ulonglong)dStack_d0 & 0xffffffff);
      local_d8 = (double)iVar4;
      iVar4 = FUN_140e851f0(&local_108,&local_d8,DAT_141955260,1);
      if ((1 << ((byte)((ulonglong)dStack_d0 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      if (iVar4 == -2 || -1 < iVar4) {
        if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_b0);
        }
        if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_98);
        }
        if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_88);
        }
        if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_78);
        }
        if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_e8);
        }
        if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_68);
        }
        if (0 < (int)local_48[0]) {
          puVar7 = local_40;
          do {
            puVar2 = (undefined8 *)*puVar7;
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar2);
            }
            *puVar2 = 0;
            *(undefined4 *)(puVar2 + 1) = 0;
            *(undefined4 *)((longlong)puVar2 + 0xc) = 5;
            puVar7 = puVar7 + 1;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        FUN_140e4cd60(local_40);
        DAT_141dc7a50 = (undefined8 *)local_c8;
        return param_3;
      }
      local_b8 = 0x1bd;
      iVar4 = FUN_140e4a740(&local_108);
      plVar9 = (longlong *)0x0;
      if (((local_ec & 0xffffff) == 2) && (local_f8 != 0)) {
        if ((iVar4 < 0) || (*(int *)(local_f8 + 0x24) <= iVar4)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                        *(undefined4 *)(local_f8 + 0x24));
        }
        else {
          plVar9 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(local_f8 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        plVar9 = &local_f8;
      }
      FUN_140e87440(plVar9,DAT_141a46988,0x80000000,&local_78,0,0);
      FUN_140e87440(&local_78,DAT_141a46588,0x80000000,&local_88,0,0);
      if ((int)local_48[0] < 1) {
        puVar7 = &DAT_1419df7b0;
      }
      else {
        puVar7 = (undefined8 *)*local_40;
      }
      iVar4 = FUN_140e851f0(&local_88,puVar7,DAT_141955260,0);
    } while (iVar4 != 0);
    local_b8 = 0x1be;
    iVar4 = FUN_140e4a740(&local_108);
    plVar9 = (longlong *)0x0;
    if (((local_ec & 0xffffff) == 2) && (local_f8 != 0)) {
      if ((iVar4 < 0) || (*(int *)(local_f8 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                      *(undefined4 *)(local_f8 + 0x24));
      }
      else {
        plVar9 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(local_f8 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      plVar9 = &local_f8;
    }
    FUN_140e87440(plVar9,DAT_141a46c48,0x80000000,&local_98,0,0);
    if ((int)local_48[0] < 2) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)local_40[1];
    }
    iVar4 = FUN_140e851f0(puVar7,&local_98,DAT_141955260,1);
    if (0 < iVar4) {
      local_b8 = 0x1bf;
      iVar4 = FUN_140e4a740(&local_108);
      plVar9 = (longlong *)0x0;
      if (((local_ec & 0xffffff) == 2) && (local_f8 != 0)) {
        if ((iVar4 < 0) || (*(int *)(local_f8 + 0x24) <= iVar4)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                        *(undefined4 *)(local_f8 + 0x24));
        }
        else {
          plVar9 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(local_f8 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        plVar9 = &local_f8;
      }
      FUN_140e87440(plVar9,DAT_141a46c48,0x80000000,&local_98,0,0);
      if ((int)local_48[0] < 2) {
        puVar7 = &DAT_1419df7b0;
      }
      else {
        puVar7 = (undefined8 *)local_40[1];
        if (&local_98 == puVar7) goto LAB_140258ba6;
      }
      uStack_50 = CONCAT44(uStack_8c,uStack_90);
      local_58 = local_98;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_58);
    }
LAB_140258ba6:
    local_b8 = 0x1c2;
    if ((int)local_48[0] < 2) {
      puVar7 = &DAT_1419df7b0;
LAB_140258bc4:
      local_58 = *puVar7;
      uStack_50 = puVar7[1];
      if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b0);
      }
      FUN_140041b80(&local_b0,&local_58);
    }
    else {
      puVar7 = (undefined8 *)local_40[1];
      if (puVar7 != &local_b0) goto LAB_140258bc4;
    }
    iVar4 = FUN_140e4a740(&local_108);
    plVar9 = (longlong *)0x0;
    if (((local_ec & 0xffffff) == 2) && (local_f8 != 0)) {
      if ((iVar4 < 0) || (*(int *)(local_f8 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                      *(undefined4 *)(local_f8 + 0x24));
      }
      else {
        plVar9 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(local_f8 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      plVar9 = &local_f8;
    }
    FUN_140e87930(plVar9,DAT_141a46aa8,0x80000000,&local_b0);
  } while( true );
}

