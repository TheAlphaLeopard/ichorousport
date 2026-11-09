// gml_Script_AudioPlaySwordBurst @ 0x1402303a0

undefined8 **
gml_Script_AudioPlaySwordBurst
          (undefined8 param_1,undefined8 param_2,undefined8 **param_3,int param_4,
          undefined8 *param_5)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined8 **ppuVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double local_148;
  undefined4 local_140;
  uint local_13c;
  undefined8 *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 *local_128;
  undefined8 uStack_120;
  double local_118;
  undefined4 local_110;
  uint local_10c;
  undefined8 *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  double local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined8 *local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [32];
  double local_88;
  undefined4 local_7c;
  double *local_68 [6];
  
  local_f0 = "gml_Script_array_insert_start";
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  local_e8 = 3;
  _eh_vector_constructor_iterator_(local_a8,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_12c = 0xffffff;
  local_138 = (undefined8 *)0x0;
  local_13c = 0xffffff;
  local_148 = 0.0;
  local_c4 = 0;
  uVar9 = 0;
  uVar10 = 0;
  local_d0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = (undefined8 *)0x0;
  local_e8 = 5;
  if (param_4 < 1) {
    plVar8 = &DAT_1419df7b0;
  }
  else {
    plVar8 = (longlong *)*param_5;
  }
  iVar4 = 0;
  if ((*(int *)((longlong)plVar8 + 0xc) == 2) && (*plVar8 != 0)) {
    iVar4 = *(int *)(*plVar8 + 0x24);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_7c = 0;
  local_88 = (double)(iVar4 + 1);
  local_68[0] = &local_88;
  ppuVar5 = (undefined8 **)FUN_140e634e0(param_1,param_2,&local_d0,1,DAT_1419fd218,local_68);
  if (ppuVar5 != &local_138) {
    local_128 = *ppuVar5;
    uStack_120 = ppuVar5[1];
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_128);
  }
  local_e8 = 6;
  if (param_4 < 2) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)param_5[1];
  }
  puVar6 = (undefined8 *)FUN_140e48e40(&local_138,0);
  FUN_140e609c0(*local_138);
  if (puVar7 != puVar6) {
    local_128 = (undefined8 *)*puVar7;
    uStack_120 = (undefined8 *)puVar7[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_128);
  }
  FUN_140e60910(1);
  local_e8 = 8;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_13c = 0;
  local_148 = 0.0;
  bVar2 = true;
  do {
    iVar4 = 0;
    if (!bVar2) {
      local_e8 = 8;
      uVar3 = local_13c & 0xffffff;
      if (uVar3 == 0) {
LAB_140230613:
        local_148 = (double)CONCAT44(uVar10,uVar9) + 1.0;
      }
      else if (uVar3 == 1) {
        local_148 = (double)FUN_140e4b060(&local_148);
        local_148 = local_148 + 1.0;
        local_13c = 0;
      }
      else if (uVar3 == 7) {
        local_148 = (double)CONCAT44(local_148._4_4_,local_148._0_4_ + 1);
      }
      else if (uVar3 == 10) {
        local_148 = (double)((longlong)local_148 + 1);
      }
      else {
        if (uVar3 == 0xd) {
          local_13c = 0;
          goto LAB_140230613;
        }
        FUN_140042910(&DAT_14172c3d8,&local_148,&local_148);
      }
    }
    bVar2 = false;
    if (param_4 < 1) {
      plVar8 = &DAT_1419df7b0;
    }
    else {
      plVar8 = (longlong *)*param_5;
    }
    if ((*(int *)((longlong)plVar8 + 0xc) == 2) && (*plVar8 != 0)) {
      iVar4 = *(int *)(*plVar8 + 0x24);
    }
    local_d4 = 0;
    local_e0 = (double)iVar4;
    iVar4 = FUN_140e851f0(&local_148,&local_e0,DAT_141955260,1);
    if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e0);
    }
    if (iVar4 == -2 || -1 < iVar4) {
      local_e8 = 0xd;
      if (&local_138 != param_3) {
        uStack_b0 = CONCAT44(uStack_12c,uStack_130);
        local_b8 = local_138;
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_b8);
      }
      if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d0);
      }
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      _eh_vector_destructor_iterator_(local_a8,0x10,3,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_f8;
      return param_3;
    }
    local_e8 = 10;
    iVar4 = FUN_140e4a740(&local_148);
    if (param_4 < 1) {
      plVar8 = &DAT_1419df7b0;
    }
    else {
      plVar8 = (longlong *)*param_5;
    }
    if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar8, lVar1 != 0)) {
      if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",(longlong)iVar4,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar8 = (longlong *)0x0;
      }
      else {
        plVar8 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    uStack_fc = *(undefined4 *)((longlong)plVar8 + 0xc);
    uStack_100 = (undefined4)plVar8[1];
    if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) == 0) {
      local_108 = (undefined8 *)*plVar8;
    }
    else {
      FUN_1400419b0(&local_108,plVar8);
    }
    uVar9 = uStack_fc;
    local_10c = local_13c;
    local_110 = local_140;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) == 0) {
      local_118 = local_148;
    }
    else {
      FUN_1400419b0(&local_118,&local_148);
    }
    uStack_120 = (undefined8 *)CONCAT44(7,(undefined4)uStack_120);
    local_128 = (undefined8 *)CONCAT44(local_128._4_4_,1);
    FUN_1400460e0(&local_118,&local_128);
    if ((1 << ((byte)((ulonglong)uStack_120 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    uVar10 = FUN_140e4a740(&local_118);
    ppuVar5 = (undefined8 **)FUN_140e48e40(&local_138,uVar10);
    FUN_140e609c0(*local_138);
    if (&local_108 != ppuVar5) {
      uStack_b0 = CONCAT44(uStack_fc,uStack_100);
      local_b8 = local_108;
      if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(ppuVar5);
      }
      FUN_140041b80(ppuVar5,&local_b8);
    }
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    if ((1 << ((byte)uVar9 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140e60910(1);
    uVar9 = SUB84(local_148,0);
    uVar10 = (undefined4)((ulonglong)local_148 >> 0x20);
  } while( true );
}

