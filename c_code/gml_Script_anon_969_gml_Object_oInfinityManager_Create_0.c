// gml_Script_anon_969_gml_Object_oInfinityManager_Create_0 @ 0x140b2cf20

undefined8 *
gml_Script_anon_969_gml_Object_oInfinityManager_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  double local_d8;
  uint local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  double local_a0;
  undefined4 local_94;
  undefined8 local_90 [4];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 *local_60 [5];
  
  local_b0 = "gml_Script_anon@659@BossAttribute@gml_Object_oInfinityManager_Create_0";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 0x1f;
  _eh_vector_constructor_iterator_(local_90,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a8 = 0x21;
  local_cc = 0;
  local_d8 = 0.0;
  bVar2 = true;
  do {
    do {
      if (!bVar2) {
        local_a8 = 0x21;
        uVar3 = local_cc & 0xffffff;
        if (uVar3 != 0) {
          if (uVar3 != 1) {
            if (uVar3 == 7) {
              local_d8 = (double)CONCAT44(local_d8._4_4_,local_d8._0_4_ + 1);
            }
            else if (uVar3 == 10) {
              local_d8 = (double)((longlong)local_d8 + 1);
            }
            else {
              if (uVar3 == 0xd) {
                local_cc = 0;
                goto LAB_140b2d039;
              }
              FUN_140042910(&DAT_14172c3d8,&local_d8,&local_d8);
            }
            goto LAB_140b2d043;
          }
          local_d8 = (double)FUN_140e4b060(&local_d8);
          local_cc = 0;
        }
LAB_140b2d039:
        local_d8 = local_d8 + 1.0;
      }
LAB_140b2d043:
      bVar2 = false;
      plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1ef20);
      iVar4 = 0;
      if ((*(int *)((longlong)plVar5 + 0xc) == 2) && (*plVar5 != 0)) {
        iVar4 = *(int *)(*plVar5 + 0x24);
      }
      local_94 = 0;
      local_a0 = (double)iVar4;
      iVar4 = FUN_140e851f0(&local_d8,&local_a0,DAT_141955260,1);
      if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a0);
      }
      if (iVar4 == -2 || -1 < iVar4) {
        if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c8);
        }
        if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d8);
        }
        _eh_vector_destructor_iterator_(local_90,0x10,2,FUN_140041b30);
        DAT_141dc7a50 = (undefined8 *)local_b8;
        return param_3;
      }
      local_a8 = 0x23;
      plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1ef20);
      if (param_4 < 1) {
        puVar6 = &DAT_1419df7b0;
      }
      else {
        puVar6 = (undefined8 *)*param_5;
      }
      iVar4 = FUN_140e4a740(&local_d8);
      if (((*(uint *)((longlong)plVar5 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar5, lVar1 != 0)) {
        if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
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
      iVar4 = FUN_140e851f0(plVar5,puVar6,DAT_141955260,0);
    } while (iVar4 != 0);
    local_a8 = 0x25;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f3aa8);
    if (param_4 < 2) {
      puVar6 = &DAT_1419df7b0;
LAB_140b2d1e2:
      local_70 = *puVar6;
      uStack_68 = puVar6[1];
      if ((1 << ((byte)local_90[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_90);
      }
      FUN_140041b80(local_90,&local_70);
    }
    else {
      puVar6 = (undefined8 *)param_5[1];
      if (puVar6 != local_90) goto LAB_140b2d1e2;
    }
    local_60[0] = local_90;
    iVar4 = FUN_140e4a740(&local_d8);
    if (((*(uint *)((longlong)plVar5 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar5, lVar1 != 0)) {
      if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
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
    FUN_140e63610(param_1,param_2,&local_c8,1,plVar5,local_60);
  } while( true );
}

