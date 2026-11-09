// gml_Object_oRockFall_Create_0 @ 0x140cb2310

void gml_Object_oRockFall_Create_0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  double *pdVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  double *pdVar8;
  double *pdVar9;
  double dVar10;
  undefined4 uVar11;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  double local_138;
  undefined4 local_12c;
  undefined8 local_128;
  char *local_120;
  undefined4 local_118;
  double local_110;
  undefined4 local_108;
  undefined4 local_104;
  double local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  double local_e8;
  byte local_dc;
  double local_d8;
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  double local_a8;
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  double local_88;
  byte local_7c;
  double *local_78;
  double *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  double *local_58;
  undefined1 *local_50;
  double *local_48;
  
  local_120 = "gml_Object_oRisingDustSpawner_Step_0";
  local_118 = 0;
  local_128 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_128;
  _eh_vector_constructor_iterator_(&local_e8,0x10,7,FUN_1400424d0,FUN_140041b30);
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_12c = 0xffffff;
  local_138 = 0.0;
  local_104 = 0xffffff;
  local_110 = 0.0;
  uStack_ec = 0xffffff;
  local_f8 = 0.0;
  pdVar4 = (double *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f97b8);
  local_13c = 0xffffff;
  local_148 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_118 = 1;
  plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f30c8);
  if (((*(int *)((longlong)plVar5 + 0xc) == 2) && (*plVar5 != 0)) && (*(int *)(*plVar5 + 0x24) != 0)
     ) {
    local_118 = 3;
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3118);
    FUN_140e609c0(param_1);
    FUN_1400460e0(puVar6,uVar3);
    FUN_140e60910(1);
    local_118 = 4;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f3118);
    uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f3128);
    iVar1 = FUN_140e851f0(uVar3,uVar7,DAT_141955260,1);
    if (iVar1 == -2 || -1 < iVar1) {
      local_118 = 5;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f9758);
      uStack_170 = (double)CONCAT44(0xf,(undefined4)uStack_170);
      local_178 = 7.291122019556804e-304;
      dVar10 = (double)FUN_140e4b060(&local_178);
      iVar1 = FUN_140edd1e0(param_1,param_2,(int)dVar10);
      uStack_160 = (double)(ulonglong)(uint)uStack_160;
      local_168 = (double)iVar1;
      uVar2 = FUN_140e851f0(&local_168,uVar3,DAT_141955260,1);
      if ((1 << ((byte)((ulonglong)uStack_160 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      if ((1 << ((byte)((ulonglong)uStack_170 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      if (uVar2 < 0x80000000) {
        local_118 = 5;
      }
      else {
        local_118 = 7;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
        *puVar6 = 0;
        local_118 = 8;
        pdVar8 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f30c8);
        iVar1 = 0;
        if ((*(int *)((longlong)plVar5 + 0xc) == 2) && (*plVar5 != 0)) {
          iVar1 = *(int *)(*plVar5 + 0x24);
        }
        dVar10 = (double)FUN_140e78f00((longlong)(iVar1 + -1));
        iVar1 = (int)dVar10;
        if (((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 2) &&
           (dVar10 = *pdVar8, dVar10 != 0.0)) {
          if ((iVar1 < 0) || (*(int *)((longlong)dVar10 + 0x24) <= iVar1)) {
            FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar1,
                          *(undefined4 *)((longlong)dVar10 + 0x24));
            pdVar8 = (double *)0x0;
          }
          else {
            pdVar8 = (double *)((longlong)iVar1 * 0x10 + *(longlong *)((longlong)dVar10 + 8));
          }
        }
        else {
          FUN_140e632c0("trying to index variable that is not an array");
        }
        if (pdVar8 != &local_138) {
          local_178 = *pdVar8;
          uStack_170 = pdVar8[1];
          if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_138);
          }
          FUN_140041b80(&local_138,&local_178);
        }
        local_118 = 9;
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        local_148 = 0;
        local_140 = 0;
        local_13c = 5;
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        local_158 = 0;
        local_150 = 0;
        local_14c = 5;
        pdVar8 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f30f8);
        pdVar9 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a028b8);
        (**(code **)(*param_1 + 8))(param_1,DAT_1419f30c8);
        (**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3118);
        FUN_140e87170(&local_138,DAT_1419fe0e8,0x80000000,&local_110,param_1,param_2);
        plVar5 = param_1;
        FUN_140e87170(&local_138,DAT_1419fe158,0x80000000,&local_f8,param_1,param_2);
        uVar11 = (undefined4)((ulonglong)plVar5 >> 0x20);
        FUN_140e609c0(DAT_141a729d8);
        FUN_140e645a0(&local_178,gml_Object_oRockFall_Step_0,0);
        if (&local_178 != pdVar4) {
          local_168 = local_178;
          uStack_160 = uStack_170;
          if ((1 << ((byte)*(undefined4 *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(pdVar4);
          }
          FUN_140041b80(pdVar4,&local_168);
        }
        FUN_140e60910(1);
        if (pdVar4 != &local_e8) {
          local_168 = *pdVar4;
          uStack_160 = pdVar4[1];
          if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_e8);
          }
          FUN_140041b80(&local_e8,&local_168);
        }
        if ((1 << ((byte)((ulonglong)uStack_170 >> 0x20) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        local_78 = &local_e8;
        if (pdVar9 != &local_d8) {
          local_178 = *pdVar9;
          uStack_170 = pdVar9[1];
          if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_d8);
          }
          FUN_140041b80(&local_d8,&local_178);
        }
        local_70 = &local_d8;
        uVar3 = FUN_140e794b0(0xc010000000000000,0x4010000000000000);
        uStack_160 = (double)CONCAT44(local_104,local_108);
        if ((1 << ((byte)local_104 & 0x1f) & 0x46U) == 0) {
          local_168 = local_110;
        }
        else {
          FUN_1400419b0(&local_168,&local_110);
        }
        FUN_140162c50(&local_168,uVar3);
        local_178 = local_168;
        uStack_170 = uStack_160;
        if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_c8);
        }
        FUN_140041b80(local_c8,&local_178);
        if ((1 << ((byte)((ulonglong)uStack_160 >> 0x20) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        local_68 = local_c8;
        uStack_170 = (double)CONCAT44(uStack_ec,uStack_f0);
        local_178 = local_f8;
        if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_b8);
        }
        FUN_140041b80(local_b8,&local_178);
        local_60 = local_b8;
        if (pdVar8 != &local_a8) {
          local_178 = *pdVar8;
          uStack_170 = pdVar8[1];
          if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_a8);
          }
          FUN_140041b80(&local_a8,&local_178);
        }
        uStack_170 = (double)CONCAT44(0xf,(undefined4)uStack_170);
        local_178 = 7.291122019556804e-304;
        local_168 = 7.291122019556804e-304;
        uStack_160 = uStack_170;
        local_58 = &local_a8;
        if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_98);
        }
        FUN_140041b80(local_98,&local_168);
        local_50 = local_98;
        uVar3 = CONCAT44(uVar11,DAT_1419fd6d8);
        pdVar4 = (double *)FUN_140e634e0(param_1,param_2,&local_158,2,uVar3,&local_78);
        uVar11 = (undefined4)((ulonglong)uVar3 >> 0x20);
        if (pdVar4 != &local_88) {
          local_178 = *pdVar4;
          uStack_170 = pdVar4[1];
          if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_88);
          }
          FUN_140041b80(&local_88,&local_178);
        }
        local_48 = &local_88;
        FUN_140e634e0(param_1,param_2,&local_148,5,CONCAT44(uVar11,DAT_141a0a7c8),&local_68);
      }
    }
    else {
      local_118 = 4;
    }
  }
  else {
    local_118 = 1;
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  _eh_vector_destructor_iterator_(&local_e8,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_128;
  return;
}

