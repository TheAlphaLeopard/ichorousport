// gml_GlobalScript_StructPickRandomVariable @ 0x1405dabf0

undefined8 *
gml_GlobalScript_StructPickRandomVariable
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  double *pdVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  double local_138;
  uint local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  double local_118;
  double dStack_110;
  double local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  double local_e0;
  uint uStack_d4;
  double local_d0;
  double dStack_c8;
  double local_b8 [4];
  double local_98 [2];
  double local_88;
  byte local_7c;
  double *local_78;
  double *local_70;
  double *local_68;
  double *local_60 [5];
  
  local_f0 = "gml_Script_structs_equal";
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  local_e8 = 1;
  uVar13 = 1;
  _eh_vector_constructor_iterator_(local_b8,0x10,4,FUN_1400424d0,FUN_140041b30);
  uVar10 = 0xffffff;
  uStack_d4 = 0xffffff;
  local_e0 = 0.0;
  local_12c = 0xffffff;
  local_138 = 0.0;
  local_fc = 0xffffff;
  local_108 = 0.0;
  local_13c = 0;
  uVar11 = 0;
  uVar12 = 0;
  local_148 = 0;
  local_11c = 0;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_e8 = 2;
  if (param_4 < 1) {
    pdVar6 = (double *)&DAT_1419df7b0;
LAB_1405dace7:
    local_118 = *pdVar6;
    dStack_110 = pdVar6[1];
    if ((1 << ((byte)local_98[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_118);
  }
  else {
    pdVar6 = (double *)*param_5;
    if (pdVar6 != local_98) goto LAB_1405dace7;
  }
  local_68 = local_98;
  uVar7 = CONCAT44(uVar13,DAT_1419fcb88);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_148,1,uVar7,&local_68);
  uVar13 = (undefined4)((ulonglong)uVar7 >> 0x20);
  cVar2 = FUN_140e491e0(uVar5);
  if (cVar2 != '\0') {
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    if (param_4 < 2) {
      pdVar6 = (double *)&DAT_1419df7b0;
LAB_1405dad9f:
      local_118 = *pdVar6;
      dStack_110 = pdVar6[1];
      if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      FUN_140041b80(&local_88,&local_118);
    }
    else {
      pdVar6 = (double *)param_5[1];
      if (pdVar6 != &local_88) goto LAB_1405dad9f;
    }
    local_60[0] = &local_88;
    uVar7 = CONCAT44(uVar13,DAT_1419fcb88);
    uVar5 = FUN_140e634e0(param_1,param_2,&local_128,1,uVar7,local_60);
    uVar13 = (undefined4)((ulonglong)uVar7 >> 0x20);
    cVar2 = FUN_140e491e0(uVar5);
    if (cVar2 != '\0') {
      local_e8 = 3;
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      local_148 = 0;
      local_140 = 0;
      local_13c = 5;
      if (param_4 < 1) {
        pdVar6 = (double *)&DAT_1419df7b0;
      }
      else {
        pdVar6 = (double *)*param_5;
        if (pdVar6 == local_b8) goto LAB_1405dae89;
      }
      local_118 = *pdVar6;
      dStack_110 = pdVar6[1];
      if ((1 << ((byte)local_b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_b8);
      }
      FUN_140041b80(local_b8,&local_118);
LAB_1405dae89:
      local_78 = local_b8;
      uVar5 = CONCAT44(uVar13,DAT_141a063c8);
      pdVar6 = (double *)FUN_140e634e0(param_1,param_2,&local_148,1,uVar5,&local_78);
      dVar9 = 0.0;
      if (pdVar6 != &local_e0) {
        local_118 = *pdVar6;
        dStack_110 = pdVar6[1];
        FUN_140041b80(&local_e0,&local_118);
        dVar9 = local_e0;
        uVar10 = uStack_d4;
      }
      local_e8 = 4;
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      local_12c = 0;
      local_138 = 0.0;
      bVar1 = true;
      do {
        uVar13 = (undefined4)((ulonglong)uVar5 >> 0x20);
        iVar4 = 0;
        if (!bVar1) {
          local_e8 = 4;
          uVar3 = local_12c & 0xffffff;
          if (uVar3 == 0) {
LAB_1405daf67:
            local_138 = (double)CONCAT44(uVar12,uVar11) + 1.0;
          }
          else if (uVar3 == 1) {
            local_138 = (double)FUN_140e4b060(&local_138);
            local_138 = local_138 + 1.0;
            local_12c = 0;
          }
          else if (uVar3 == 7) {
            local_138 = (double)CONCAT44(local_138._4_4_,local_138._0_4_ + 1);
          }
          else if (uVar3 == 10) {
            local_138 = (double)((longlong)local_138 + 1);
          }
          else {
            if (uVar3 == 0xd) {
              local_12c = 0;
              goto LAB_1405daf67;
            }
            FUN_140042910(&DAT_14172c3d8,&local_138,&local_138);
          }
        }
        bVar1 = false;
        if ((uVar10 == 2) && (dVar9 != 0.0)) {
          iVar4 = *(int *)((longlong)dVar9 + 0x24);
        }
        dStack_110 = (double)((ulonglong)dStack_110 & 0xffffffff);
        local_118 = (double)iVar4;
        iVar4 = FUN_140e851f0(&local_138,&local_118,DAT_141955260,1);
        if ((1 << ((byte)((ulonglong)dStack_110 >> 0x20) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        if (iVar4 == -2 || -1 < iVar4) {
          local_e8 = 9;
          *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
          *param_3 = 0x3ff0000000000000;
          goto LAB_1405db363;
        }
        local_e8 = 5;
        iVar4 = FUN_140e4a740(&local_138);
        pdVar6 = (double *)0x0;
        if (((uVar10 & 0xffffff) == 2) && (dVar9 != 0.0)) {
          if ((iVar4 < 0) || (*(int *)((longlong)dVar9 + 0x24) <= iVar4)) {
            FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                          *(undefined4 *)((longlong)dVar9 + 0x24));
          }
          else {
            pdVar6 = (double *)((longlong)iVar4 * 0x10 + *(longlong *)((longlong)dVar9 + 8));
          }
          if (pdVar6 != &local_108) goto LAB_1405db071;
        }
        else {
          FUN_140e632c0("trying to index variable that is not an array");
          pdVar6 = &local_e0;
LAB_1405db071:
          local_d0 = *pdVar6;
          dStack_c8 = pdVar6[1];
          if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_108);
          }
          FUN_140041b80(&local_108,&local_d0);
        }
        local_e8 = 6;
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        local_148 = 0;
        local_140 = 0;
        local_13c = 5;
        if (param_4 < 2) {
          pdVar6 = (double *)&DAT_1419df7b0;
LAB_1405db0ef:
          local_d0 = *pdVar6;
          dStack_c8 = pdVar6[1];
          if ((1 << ((byte)local_b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_b8);
          }
          FUN_140041b80(local_b8,&local_d0);
        }
        else {
          pdVar6 = (double *)param_5[1];
          if (pdVar6 != local_b8) goto LAB_1405db0ef;
        }
        local_78 = local_b8;
        local_70 = &local_108;
        uVar7 = CONCAT44(uVar13,DAT_1419fcba8);
        uVar5 = FUN_140e634e0(param_1,param_2,&local_148,2,uVar7,&local_78);
        uVar11 = (undefined4)((ulonglong)uVar7 >> 0x20);
        cVar2 = FUN_140e491e0(uVar5);
        if (cVar2 == '\0') {
          local_e8 = 6;
          goto LAB_1405db355;
        }
        local_e8 = 7;
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        local_148 = 0;
        local_140 = 0;
        local_13c = 5;
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        local_128 = 0;
        local_120 = 0;
        local_11c = 5;
        if (param_4 < 1) {
          pdVar6 = (double *)&DAT_1419df7b0;
LAB_1405db1e9:
          local_d0 = *pdVar6;
          dStack_c8 = pdVar6[1];
          if ((1 << ((byte)local_b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_b8);
          }
          FUN_140041b80(local_b8,&local_d0);
        }
        else {
          pdVar6 = (double *)*param_5;
          if (pdVar6 != local_b8) goto LAB_1405db1e9;
        }
        local_78 = local_b8;
        local_70 = &local_108;
        if (param_4 < 2) {
          pdVar6 = (double *)&DAT_1419df7b0;
LAB_1405db242:
          local_d0 = *pdVar6;
          dStack_c8 = pdVar6[1];
          if ((1 << ((byte)local_98[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_98);
          }
          FUN_140041b80(local_98,&local_d0);
        }
        else {
          pdVar6 = (double *)param_5[1];
          if (pdVar6 != local_98) goto LAB_1405db242;
        }
        local_68 = local_98;
        local_60[0] = &local_108;
        uVar5 = CONCAT44(uVar11,DAT_141a01138);
        uVar7 = FUN_140e634e0(param_1,param_2,&local_128,2,uVar5,&local_68);
        uVar5 = CONCAT44((int)((ulonglong)uVar5 >> 0x20),DAT_141a01138);
        uVar8 = FUN_140e634e0(param_1,param_2,&local_148,2,uVar5,&local_78);
        iVar4 = FUN_140e851f0(uVar8,uVar7,DAT_141955260,0);
        if (iVar4 != 0) goto LAB_1405db30a;
        uVar11 = SUB84(local_138,0);
        uVar12 = (undefined4)((ulonglong)local_138 >> 0x20);
      } while( true );
    }
  }
  local_e8 = 2;
LAB_1405db355:
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  *param_3 = 0;
LAB_1405db363:
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uVar10 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return param_3;
LAB_1405db30a:
  local_e8 = 7;
  goto LAB_1405db355;
}

