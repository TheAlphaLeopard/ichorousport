// gml_Object_oTrainingDummy_Create_0 @ 0x140dd61b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oTrainingDummy_Create_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  double *pdVar4;
  double *pdVar5;
  undefined8 uVar6;
  double *pdVar7;
  double *pdVar8;
  undefined8 *puVar9;
  double *pdVar10;
  double *pdVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined4 uVar14;
  double local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  double local_c8;
  byte local_bc;
  double local_b8;
  byte local_ac;
  double local_a8;
  byte local_9c;
  double local_98;
  byte local_8c;
  double local_88;
  double dStack_80;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  double *local_60;
  double *local_58;
  double *local_50;
  double *local_48;
  
  local_70 = "gml_Object_oTrailerOffering_Step_0";
  local_68 = 0;
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  uVar14 = 1;
  _eh_vector_constructor_iterator_(&local_c8,0x10,4,FUN_1400424d0,FUN_140041b30);
  pdVar4 = (double *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef2d8);
  pdVar5 = (double *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef1a8);
  local_dc = 0xffffff;
  local_e8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_68 = 2;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f19f8);
  cVar1 = FUN_140e491e0(uVar6);
  if (cVar1 == '\0') {
    local_68 = 0x13;
    puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
    FUN_140046040(puVar9);
    local_68 = 0x14;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0a848);
    uVar12 = (**(code **)(*param_1 + 8))(param_1,DAT_141a08b58);
    iVar2 = FUN_140e851f0(uVar6,uVar12,DAT_141955260,1);
    if (iVar2 == -2 || -1 < iVar2) {
      local_68 = 0x15;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar9);
      }
      *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
      *puVar9 = 0;
      local_68 = 0x17;
      pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a01e88);
      pdVar8 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a01e98);
      dStack_80 = pdVar7[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar7 + 0xc) & 0x1f) & 0x46U) == 0) {
        local_88 = *pdVar7;
      }
      else {
        FUN_1400419b0(&local_88,pdVar7);
      }
      uStack_f0._4_4_ = 7;
      local_f8 = (double)CONCAT44(local_f8._4_4_,1);
      FUN_1400460e0(&local_88,&local_f8);
      if ((1 << ((byte)uStack_f0._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      iVar2 = 0;
      if ((*(int *)((longlong)pdVar8 + 0xc) == 2) && (*pdVar8 != 0.0)) {
        iVar2 = *(int *)((longlong)*pdVar8 + 0x24);
      }
      uStack_f0 = (double)(ulonglong)(uint)uStack_f0;
      local_f8 = (double)iVar2;
      uVar3 = FUN_140e851f0(&local_88,&local_f8,DAT_141955260,1);
      if ((1 << ((byte)((ulonglong)uStack_f0 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      if ((1 << ((byte)((ulonglong)dStack_80 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      if (0x7fffffff < uVar3) {
        pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a01eb8);
        plVar13 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a01ee8);
        (**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
        dStack_80 = pdVar10[1];
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar10 + 0xc) & 0x1f) & 0x46U) == 0) {
          local_88 = *pdVar10;
        }
        else {
          FUN_1400419b0(&local_88,pdVar10);
        }
        uStack_f0._4_4_ = 7;
        local_f8 = (double)CONCAT44(local_f8._4_4_,1);
        FUN_1400460e0(&local_88,&local_f8);
        if ((1 << ((byte)uStack_f0._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50();
        }
        iVar2 = 0;
        if ((*(int *)((longlong)plVar13 + 0xc) == 2) && (*plVar13 != 0)) {
          iVar2 = *(int *)(*plVar13 + 0x24);
        }
        uStack_f0 = (double)(ulonglong)(uint)uStack_f0;
        local_f8 = (double)iVar2;
        uVar3 = FUN_140e851f0(&local_88,&local_f8,DAT_141955260,1);
        if ((1 << ((byte)((ulonglong)uStack_f0 >> 0x20) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        if ((1 << ((byte)((ulonglong)dStack_80 >> 0x20) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_88);
        }
        if (0x7fffffff < uVar3) {
          local_68 = 0x1d;
          uVar6 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a01e88);
          FUN_140046040(uVar6);
          local_68 = 0x1e;
          uVar6 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a01eb8);
          FUN_140046040(uVar6);
          local_68 = 0x20;
          if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_e8);
          }
          local_e8 = 0;
          local_e0 = 0;
          local_dc = 5;
          if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_d8);
          }
          local_d8 = 0;
          local_d0 = 0;
          local_cc = 5;
          pdVar10 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01ec8);
          if (pdVar8 != &local_c8) {
            local_f8 = *pdVar8;
            uStack_f0 = pdVar8[1];
            if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_c8);
            }
            FUN_140041b80(&local_c8,&local_f8);
          }
          local_60 = &local_c8;
          if (pdVar7 != &local_b8) {
            local_f8 = *pdVar7;
            uStack_f0 = pdVar7[1];
            if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_b8);
            }
            FUN_140041b80(&local_b8,&local_f8);
          }
          local_58 = &local_b8;
          if (pdVar4 != &local_a8) {
            local_f8 = *pdVar4;
            uStack_f0 = pdVar4[1];
            if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_a8);
            }
            FUN_140041b80(&local_a8,&local_f8);
          }
          local_50 = &local_a8;
          uVar6 = CONCAT44(uVar14,DAT_141a03ca8);
          pdVar4 = (double *)FUN_140e634e0(param_1,param_2,&local_d8,2,uVar6,&local_60);
          uVar14 = (undefined4)((ulonglong)uVar6 >> 0x20);
          if (pdVar4 != &local_98) {
            local_f8 = *pdVar4;
            uStack_f0 = pdVar4[1];
            if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_98);
            }
            FUN_140041b80(&local_98,&local_f8);
          }
          local_48 = &local_98;
          FUN_140e609c0(param_1);
          uVar6 = CONCAT44(uVar14,DAT_141a01138);
          pdVar4 = (double *)FUN_140e634e0(param_1,param_2,&local_e8,2,uVar6,&local_50);
          uVar14 = (undefined4)((ulonglong)uVar6 >> 0x20);
          if (pdVar4 != pdVar10) {
            local_f8 = *pdVar4;
            uStack_f0 = pdVar4[1];
            if ((1 << ((byte)*(undefined4 *)((longlong)pdVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(pdVar10);
            }
            FUN_140041b80(pdVar10,&local_f8);
          }
          FUN_140e60910(1);
          local_68 = 0x21;
          if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_e8);
          }
          local_e8 = 0;
          local_e0 = 0;
          local_dc = 5;
          if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_d8);
          }
          local_d8 = 0;
          local_d0 = 0;
          local_cc = 5;
          pdVar4 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a01ee8);
          pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a01eb8);
          pdVar8 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01ea8);
          if (pdVar4 != &local_c8) {
            local_f8 = *pdVar4;
            uStack_f0 = pdVar4[1];
            if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_c8);
            }
            FUN_140041b80(&local_c8,&local_f8);
          }
          local_60 = &local_c8;
          if (pdVar7 != &local_b8) {
            local_f8 = *pdVar7;
            uStack_f0 = pdVar7[1];
            if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_b8);
            }
            FUN_140041b80(&local_b8,&local_f8);
          }
          local_58 = &local_b8;
          if (pdVar5 != &local_a8) {
            local_f8 = *pdVar5;
            uStack_f0 = pdVar5[1];
            if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_a8);
            }
            FUN_140041b80(&local_a8,&local_f8);
          }
          local_50 = &local_a8;
          uVar6 = CONCAT44(uVar14,DAT_141a03ca8);
          pdVar4 = (double *)FUN_140e634e0(param_1,param_2,&local_d8,2,uVar6,&local_60);
          uVar14 = (undefined4)((ulonglong)uVar6 >> 0x20);
          if (pdVar4 != &local_98) {
            local_f8 = *pdVar4;
            uStack_f0 = pdVar4[1];
            if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_98);
            }
            FUN_140041b80(&local_98,&local_f8);
          }
          local_48 = &local_98;
          FUN_140e609c0(param_1);
          uVar6 = CONCAT44(uVar14,DAT_141a01138);
          pdVar4 = (double *)FUN_140e634e0(param_1,param_2,&local_e8,2,uVar6,&local_50);
          uVar14 = (undefined4)((ulonglong)uVar6 >> 0x20);
          if (pdVar4 != pdVar8) {
            local_f8 = *pdVar4;
            uStack_f0 = pdVar4[1];
            if ((1 << ((byte)*(undefined4 *)((longlong)pdVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(pdVar8);
            }
            FUN_140041b80(pdVar8,&local_f8);
          }
          FUN_140e60910(1);
          local_68 = 0x23;
          if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_e8);
          }
          local_e8 = 0;
          local_e0 = 0;
          local_dc = 5;
          uStack_f0 = (double)CONCAT44(0xf,(uint)uStack_f0);
          local_f8 = 7.29113592626871e-304;
          local_88 = 7.29113592626871e-304;
          dStack_80 = uStack_f0;
          if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_c8);
          }
          FUN_140041b80(&local_c8,&local_88);
          local_60 = &local_c8;
          local_f8 = _DAT_1419ee530;
          uStack_f0 = (double)uRam00000001419ee538;
          if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_b8);
          }
          FUN_140041b80(&local_b8,&local_f8);
          local_58 = &local_b8;
          local_f8 = _DAT_1419df7a0;
          uStack_f0 = dRam00000001419df7a8;
          if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_a8);
          }
          FUN_140041b80(&local_a8,&local_f8);
          local_50 = &local_a8;
          FUN_140e634e0(param_1,param_2,&local_e8,3,CONCAT44(uVar14,DAT_141a0a2e8),&local_60);
          goto LAB_140dd7394;
        }
      }
      local_68 = 0x19;
      pdVar4 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f19f8);
      uStack_f0 = (double)CONCAT44(0xd,(uint)uStack_f0);
      local_f8 = 1.0;
      if (&local_f8 != pdVar4) {
        local_88 = 1.0;
        dStack_80 = uStack_f0;
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar4);
        }
        FUN_140041b80(pdVar4,&local_88);
      }
      local_68 = 0x1a;
    }
    else {
      local_68 = 0x14;
    }
  }
  else {
    local_68 = 4;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    local_f8 = _DAT_1419ee520;
    uStack_f0 = dRam00000001419ee528;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_f8);
    local_60 = &local_c8;
    uVar12 = CONCAT44(uVar14,DAT_141a02738);
    uVar6 = FUN_140e634e0(param_1,param_2,&local_e8,1,uVar12,&local_60);
    uVar14 = (undefined4)((ulonglong)uVar12 >> 0x20);
    cVar1 = FUN_140e491e0(uVar6);
    if (cVar1 != '\0') {
      local_68 = 6;
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      local_d8 = 0;
      local_d0 = 0;
      local_cc = 5;
      pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a01e98);
      if (pdVar7 != &local_b8) {
        local_f8 = *pdVar7;
        uStack_f0 = pdVar7[1];
        if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_b8);
        }
        FUN_140041b80(&local_b8,&local_f8);
      }
      local_58 = &local_b8;
      uVar6 = CONCAT44(uVar14,DAT_141a01ed8);
      FUN_140e634e0(param_1,param_2,&local_d8,1,uVar6,&local_58);
      uVar14 = (undefined4)((ulonglong)uVar6 >> 0x20);
      local_68 = 7;
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      local_e8 = 0;
      local_e0 = 0;
      local_dc = 5;
      pdVar8 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a01ee8);
      if (pdVar8 != &local_c8) {
        local_f8 = *pdVar8;
        uStack_f0 = pdVar8[1];
        if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c8);
        }
        FUN_140041b80(&local_c8,&local_f8);
      }
      local_60 = &local_c8;
      uVar6 = CONCAT44(uVar14,DAT_141a01ed8);
      FUN_140e634e0(param_1,param_2,&local_e8,1,uVar6,&local_60);
      uVar14 = (undefined4)((ulonglong)uVar6 >> 0x20);
      local_68 = 8;
      puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01e88);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar9);
      }
      *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
      *puVar9 = 0;
      local_68 = 9;
      puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01eb8);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar9);
      }
      *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
      *puVar9 = 0;
      local_68 = 10;
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      local_e8 = 0;
      local_e0 = 0;
      local_dc = 5;
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      local_d8 = 0;
      local_d0 = 0;
      local_cc = 5;
      pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a01e88);
      pdVar11 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01ec8);
      if (pdVar7 != &local_c8) {
        local_f8 = *pdVar7;
        uStack_f0 = pdVar7[1];
        if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c8);
        }
        FUN_140041b80(&local_c8,&local_f8);
      }
      local_60 = &local_c8;
      if (pdVar10 != &local_b8) {
        local_f8 = *pdVar10;
        uStack_f0 = pdVar10[1];
        if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_b8);
        }
        FUN_140041b80(&local_b8,&local_f8);
      }
      local_58 = &local_b8;
      if (pdVar4 != &local_a8) {
        local_f8 = *pdVar4;
        uStack_f0 = pdVar4[1];
        if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_a8);
        }
        FUN_140041b80(&local_a8,&local_f8);
      }
      local_50 = &local_a8;
      uVar6 = CONCAT44(uVar14,DAT_141a03ca8);
      pdVar4 = (double *)FUN_140e634e0(param_1,param_2,&local_d8,2,uVar6,&local_60);
      uVar14 = (undefined4)((ulonglong)uVar6 >> 0x20);
      if (pdVar4 != &local_98) {
        local_f8 = *pdVar4;
        uStack_f0 = pdVar4[1];
        if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_98);
        }
        FUN_140041b80(&local_98,&local_f8);
      }
      local_48 = &local_98;
      FUN_140e609c0(param_1);
      uVar6 = CONCAT44(uVar14,DAT_141a01138);
      pdVar4 = (double *)FUN_140e634e0(param_1,param_2,&local_e8,2,uVar6,&local_50);
      uVar14 = (undefined4)((ulonglong)uVar6 >> 0x20);
      if (pdVar4 != pdVar11) {
        local_f8 = *pdVar4;
        uStack_f0 = pdVar4[1];
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar11);
        }
        FUN_140041b80(pdVar11,&local_f8);
      }
      FUN_140e60910(1);
      local_68 = 0xb;
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      local_e8 = 0;
      local_e0 = 0;
      local_dc = 5;
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      local_d8 = 0;
      local_d0 = 0;
      local_cc = 5;
      pdVar4 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a01eb8);
      pdVar7 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01ea8);
      if (pdVar8 != &local_c8) {
        local_f8 = *pdVar8;
        uStack_f0 = pdVar8[1];
        if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c8);
        }
        FUN_140041b80(&local_c8,&local_f8);
      }
      local_60 = &local_c8;
      if (pdVar4 != &local_b8) {
        local_f8 = *pdVar4;
        uStack_f0 = pdVar4[1];
        if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_b8);
        }
        FUN_140041b80(&local_b8,&local_f8);
      }
      local_58 = &local_b8;
      if (pdVar5 != &local_a8) {
        local_f8 = *pdVar5;
        uStack_f0 = pdVar5[1];
        if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_a8);
        }
        FUN_140041b80(&local_a8,&local_f8);
      }
      local_50 = &local_a8;
      uVar6 = CONCAT44(uVar14,DAT_141a03ca8);
      pdVar4 = (double *)FUN_140e634e0(param_1,param_2,&local_d8,2,uVar6,&local_60);
      uVar14 = (undefined4)((ulonglong)uVar6 >> 0x20);
      if (pdVar4 != &local_98) {
        local_f8 = *pdVar4;
        uStack_f0 = pdVar4[1];
        if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_98);
        }
        FUN_140041b80(&local_98,&local_f8);
      }
      local_48 = &local_98;
      FUN_140e609c0(param_1);
      uVar6 = CONCAT44(uVar14,DAT_141a01138);
      pdVar4 = (double *)FUN_140e634e0(param_1,param_2,&local_e8,2,uVar6,&local_50);
      uVar14 = (undefined4)((ulonglong)uVar6 >> 0x20);
      if (pdVar4 != pdVar7) {
        local_f8 = *pdVar4;
        uStack_f0 = pdVar4[1];
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar7);
        }
        FUN_140041b80(pdVar7,&local_f8);
      }
      FUN_140e60910(1);
      local_68 = 0xc;
      puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar9);
      }
      *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
      *puVar9 = 0;
      local_68 = 0xd;
      pdVar4 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f19f8);
      uStack_f0 = (double)CONCAT44(0xd,(uint)uStack_f0);
      local_f8 = 0.0;
      if (&local_f8 != pdVar4) {
        local_88 = 0.0;
        dStack_80 = uStack_f0;
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar4);
        }
        FUN_140041b80(pdVar4,&local_88);
      }
      local_68 = 0xe;
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      local_e8 = 0;
      local_e0 = 0;
      local_dc = 5;
      uStack_f0 = (double)CONCAT44(0xf,(uint)uStack_f0);
      local_f8 = 7.29113592626871e-304;
      local_88 = 7.29113592626871e-304;
      dStack_80 = uStack_f0;
      if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      FUN_140041b80(&local_c8,&local_88);
      local_60 = &local_c8;
      local_f8 = _DAT_1419ee530;
      uStack_f0 = (double)uRam00000001419ee538;
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      FUN_140041b80(&local_b8,&local_f8);
      local_58 = &local_b8;
      local_f8 = _DAT_1419df7a0;
      uStack_f0 = dRam00000001419df7a8;
      if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      FUN_140041b80(&local_a8,&local_f8);
      local_50 = &local_a8;
      FUN_140e634e0(param_1,param_2,&local_e8,3,CONCAT44(uVar14,DAT_141a0a2e8),&local_60);
    }
    local_68 = 0x10;
  }
LAB_140dd7394:
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(&local_c8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return;
}

