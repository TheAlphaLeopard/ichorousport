// gml_Script_MouseWindowX @ 0x1403b7090

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_MouseWindowX
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  code *pcVar6;
  undefined4 uVar8;
  longlong **pplVar7;
  double local_158;
  uint local_14c;
  longlong local_148;
  longlong lStack_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  longlong local_e8 [2];
  longlong local_d8 [2];
  longlong local_c8 [2];
  longlong local_b8 [2];
  longlong local_a8 [2];
  undefined1 local_98 [16];
  double local_88;
  undefined4 local_7c;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  undefined1 *local_50;
  
  local_100 = "gml_Script_mixer_apply_db";
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  local_f8 = 3;
  pcVar6 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_e8,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_10c = 0;
  local_118 = 0;
  local_11c = 0;
  local_128 = 0;
  local_12c = 0;
  local_138 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_f8 = 5;
  local_14c = 0;
  local_158 = 0.0;
  bVar2 = true;
  do {
    uVar8 = (undefined4)((ulonglong)pcVar6 >> 0x20);
    iVar4 = 0;
    if (!bVar2) {
      local_f8 = 5;
      uVar3 = local_14c & 0xffffff;
      if (uVar3 != 0) {
        if (uVar3 != 1) {
          if (uVar3 == 7) {
            local_158 = (double)CONCAT44(local_158._4_4_,local_158._0_4_ + 1);
          }
          else if (uVar3 == 10) {
            local_158 = (double)((longlong)local_158 + 1);
          }
          else {
            if (uVar3 == 0xd) goto LAB_1403b71be;
            FUN_140042910(&DAT_14172c3d8,&local_158,&local_158);
          }
          goto LAB_1403b71cc;
        }
        local_158 = (double)FUN_140e4b060(&local_158);
LAB_1403b71be:
        local_14c = 0;
      }
      local_158 = local_158 + 1.0;
    }
LAB_1403b71cc:
    bVar2 = false;
    if (param_4 < 1) {
      plVar5 = &DAT_1419df7b0;
    }
    else {
      plVar5 = (longlong *)*param_5;
    }
    if ((*(int *)((longlong)plVar5 + 0xc) == 2) && (*plVar5 != 0)) {
      iVar4 = *(int *)(*plVar5 + 0x24);
    }
    local_7c = 0;
    local_88 = (double)iVar4;
    iVar4 = FUN_140e851f0(&local_158,&local_88,DAT_141955260,1);
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    if (iVar4 == -2 || -1 < iVar4) {
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      _eh_vector_destructor_iterator_(local_e8,0x10,6,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_108;
      return param_3;
    }
    local_f8 = 6;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_118 = 0;
    local_110 = 0;
    local_10c = 5;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    iVar4 = FUN_140e4a740(&local_158);
    if (param_4 < 1) {
      plVar5 = &DAT_1419df7b0;
    }
    else {
      plVar5 = (longlong *)*param_5;
    }
    if (((*(uint *)((longlong)plVar5 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar5, lVar1 != 0)) {
      if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",(longlong)iVar4,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (plVar5 != local_e8) {
      local_148 = *plVar5;
      lStack_140 = plVar5[1];
      if ((1 << ((byte)local_e8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_e8);
      }
      FUN_140041b80(local_e8,&local_148);
    }
    local_78 = local_e8;
    plVar5 = (longlong *)
             FUN_140e634e0(param_1,param_2,&local_138,1,CONCAT44(uVar8,DAT_1419f5508),&local_78);
    if (plVar5 != local_d8) {
      local_148 = *plVar5;
      lStack_140 = plVar5[1];
      if ((1 << ((byte)local_d8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_d8);
      }
      FUN_140041b80(local_d8,&local_148);
    }
    local_70 = local_d8;
    if (param_4 < 2) {
      plVar5 = &DAT_1419df7b0;
LAB_1403b7402:
      local_148 = *plVar5;
      lStack_140 = plVar5[1];
      if ((1 << ((byte)local_c8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_c8);
      }
      FUN_140041b80(local_c8,&local_148);
    }
    else {
      plVar5 = (longlong *)param_5[1];
      if (plVar5 != local_c8) goto LAB_1403b7402;
    }
    local_68 = local_c8;
    iVar4 = FUN_140e4a740(&local_158);
    if (param_4 < 1) {
      plVar5 = &DAT_1419df7b0;
    }
    else {
      plVar5 = (longlong *)*param_5;
    }
    if (((*(uint *)((longlong)plVar5 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar5, lVar1 != 0)) {
      if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",(longlong)iVar4,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (plVar5 != local_b8) {
      local_148 = *plVar5;
      lStack_140 = plVar5[1];
      if ((1 << ((byte)local_b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_b8);
      }
      FUN_140041b80(local_b8,&local_148);
    }
    local_60 = local_b8;
    pplVar7 = &local_70;
    plVar5 = (longlong *)gml_Script_shader_set_wall_blood(param_1,param_2,&local_128,2,pplVar7);
    uVar8 = (undefined4)((ulonglong)pplVar7 >> 0x20);
    if (plVar5 != local_a8) {
      local_148 = *plVar5;
      lStack_140 = plVar5[1];
      if ((1 << ((byte)local_a8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_a8);
      }
      FUN_140041b80(local_a8,&local_148);
    }
    local_58 = local_a8;
    local_148 = _DAT_141dc6530;
    lStack_140 = lRam0000000141dc6538;
    if ((1 << (local_98[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_148);
    local_50 = local_98;
    pcVar6 = (code *)CONCAT44(uVar8,DAT_1419f4a48);
    FUN_140e634e0(param_1,param_2,&local_118,3,pcVar6,&local_60);
  } while( true );
}

