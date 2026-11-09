// gml_Script____struct___753_anon_17786_gml_Object_oRogueLevelManager_Other_11 @ 0x140cf53d0

longlong *
gml_Script____struct___753_anon_17786_gml_Object_oRogueLevelManager_Other_11
          (undefined8 param_1,undefined8 param_2,longlong *param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  uint uVar8;
  double local_128;
  uint local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  longlong local_e8;
  undefined4 local_dc;
  longlong local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  longlong local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong local_68;
  longlong lStack_60;
  double local_58;
  undefined4 local_4c;
  
  local_c0 = "gml_Script_anon@13611@anon@11762@gml_Object_oRogueLevelManager_Other_11";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_b8 = 0x1b6;
  local_11c = 0;
  local_128 = 0.0;
  bVar2 = true;
  uVar8 = 0x3ff00000;
  do {
    plVar6 = &DAT_1419df7b0;
    iVar4 = 0;
    if (!bVar2) {
      local_b8 = 0x1b6;
      uVar3 = local_11c & 0xffffff;
      if (uVar3 != 0) {
        if (uVar3 != 1) {
          if (uVar3 == 7) {
            local_128 = (double)CONCAT44(local_128._4_4_,local_128._0_4_ + 1);
          }
          else if (uVar3 == 10) {
            local_128 = (double)((longlong)local_128 + 1);
          }
          else {
            if (uVar3 == 0xd) goto LAB_140cf54e6;
            FUN_140042910(&DAT_14172c3d8,&local_128,&local_128);
          }
          goto LAB_140cf54f4;
        }
        local_128 = (double)FUN_140e4b060(&local_128);
LAB_140cf54e6:
        local_11c = 0;
      }
      local_128 = local_128 + 1.0;
    }
LAB_140cf54f4:
    bVar2 = false;
    if (param_4 < 3) {
      plVar5 = &DAT_1419df7b0;
    }
    else {
      plVar5 = (longlong *)param_5[2];
    }
    if ((*(int *)((longlong)plVar5 + 0xc) == 2) && (*plVar5 != 0)) {
      iVar4 = *(int *)(*plVar5 + 0x24);
    }
    local_4c = 0;
    local_58 = (double)iVar4;
    iVar4 = FUN_140e851f0(&local_128,&local_58,DAT_141955260,1);
    if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_58);
    }
    if (iVar4 == -2 || -1 < iVar4) {
      local_b8 = 0x1bd;
      uVar8 = 0;
      goto LAB_140cf5a41;
    }
    local_b8 = 0x1b7;
    iVar4 = FUN_140e4a740(&local_128);
    if (2 < param_4) {
      plVar6 = (longlong *)param_5[2];
    }
    if (((*(uint *)((longlong)plVar6 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar6, lVar1 != 0)) {
      if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",(longlong)iVar4,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (((*(uint *)((longlong)plVar6 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar6, lVar1 != 0)) {
      if (*(int *)(lVar1 + 0x24) < 1) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *(longlong **)(lVar1 + 8);
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (plVar6 != &local_d8) {
      local_68 = *plVar6;
      lStack_60 = plVar6[1];
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      FUN_140041b80(&local_d8,&local_68);
    }
    local_b8 = 0x1b8;
    iVar4 = FUN_140e4a740(&local_128);
    if (param_4 < 3) {
      plVar6 = &DAT_1419df7b0;
    }
    else {
      plVar6 = (longlong *)param_5[2];
    }
    if (((*(uint *)((longlong)plVar6 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar6, lVar1 != 0)) {
      if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",(longlong)iVar4,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (((*(uint *)((longlong)plVar6 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar6, lVar1 != 0)) {
      if (*(int *)(lVar1 + 0x24) < 2) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = (longlong *)(*(longlong *)(lVar1 + 8) + 0x10);
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (plVar6 != &local_e8) {
      local_68 = *plVar6;
      lStack_60 = plVar6[1];
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_68);
    }
    local_b8 = 0x1b9;
    if (param_4 < 1) {
      plVar6 = &DAT_1419df7b0;
    }
    else {
      plVar6 = (longlong *)*param_5;
    }
    uStack_9c = *(undefined4 *)((longlong)plVar6 + 0xc);
    uStack_a0 = (undefined4)plVar6[1];
    if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) == 0) {
      local_a8 = *plVar6;
    }
    else {
      FUN_1400419b0(&local_a8);
    }
    FUN_1400462a0(&local_a8,&local_d8);
    lStack_60 = CONCAT44(uStack_9c,uStack_a0);
    local_68 = local_a8;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_68);
    if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_b8 = 0x1ba;
    if (param_4 < 2) {
      plVar6 = &DAT_1419df7b0;
    }
    else {
      plVar6 = (longlong *)param_5[1];
    }
    uStack_8c = *(undefined4 *)((longlong)plVar6 + 0xc);
    uStack_90 = (undefined4)plVar6[1];
    if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) == 0) {
      local_98 = *plVar6;
    }
    else {
      FUN_1400419b0(&local_98);
    }
    FUN_1400462a0(&local_98,&local_e8);
    lStack_60 = CONCAT44(uStack_8c,uStack_90);
    local_68 = local_98;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_68);
    if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    local_b8 = 0x1bb;
    local_6c = local_10c;
    local_70 = local_110;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) == 0) {
      local_78 = local_118;
    }
    else {
      FUN_1400419b0(&local_78,&local_118);
    }
    FUN_140042560(&local_78,&local_118);
    local_ec = local_fc;
    local_f0 = local_100;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) == 0) {
      local_f8 = local_108;
    }
    else {
      FUN_1400419b0(&local_f8,&local_108);
    }
    FUN_140042560(&local_f8,&local_108);
    local_7c = local_ec;
    local_80 = local_f0;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) == 0) {
      local_88 = local_f8;
    }
    else {
      FUN_1400419b0(&local_88,&local_f8);
    }
    FUN_1400460e0(&local_88,&local_78);
    if (param_4 < 4) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)param_5[3];
    }
    iVar4 = FUN_140e851f0(&local_88,puVar7,DAT_141955260,1);
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    if (iVar4 != -2 && iVar4 < 0) {
      local_b8 = 0x1bb;
LAB_140cf5a41:
      *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
      *param_3 = (ulonglong)uVar8 << 0x20;
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      DAT_141dc7a50 = (undefined8 *)local_c8;
      return param_3;
    }
  } while( true );
}

