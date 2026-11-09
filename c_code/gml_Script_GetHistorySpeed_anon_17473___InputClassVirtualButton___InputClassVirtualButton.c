// gml_Script_GetHistorySpeed_anon_17473___InputClassVirtualButton___InputClassVirtualButton @ 0x14005e020

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * gml_Script_GetHistorySpeed_anon_17473___InputClassVirtualButton___InputClassVirtualButton
                   (longlong *param_1,undefined8 param_2,double *param_3,undefined4 param_4,
                   undefined8 param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  char *local_170;
  undefined4 local_168;
  longlong local_160;
  undefined4 local_154;
  longlong local_150;
  undefined4 local_144;
  double local_140;
  uint local_134;
  double local_130;
  uint local_124;
  double local_120;
  uint local_114;
  double local_110;
  uint local_104;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 *local_a8;
  undefined8 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  uint local_80 [2];
  undefined8 *local_78;
  
  local_170 = 
  "gml_Script_GetHistoryDirection@anon@14995@__InputClassVirtualButton@__InputClassVirtualButton";
  local_178 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_178;
  local_168 = 0x24a;
  FUN_140041df0(local_80,param_4,1,param_5);
  _eh_vector_constructor_iterator_(local_f8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_144 = 0xffffff;
  local_150 = 0;
  local_154 = 0xffffff;
  local_160 = 0;
  local_104 = 0xffffff;
  local_110 = 0.0;
  local_114 = 0xffffff;
  local_120 = 0.0;
  local_124 = 0xffffff;
  local_130 = 0.0;
  local_134 = 0xffffff;
  local_140 = 0.0;
  local_18c = 0;
  local_198 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0.0;
  local_168 = 0x24a;
  puVar10 = &DAT_1419df7b0;
  uVar9 = (ulonglong)local_80[0];
  if ((int)local_80[0] < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*local_78;
  }
  iVar3 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_168 = 0x24a;
    if ((int)local_80[0] < 1) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)*local_78;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    *puVar6 = 0x4024000000000000;
  }
  local_168 = 0x24c;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fe108);
  cVar2 = FUN_140e491e0(uVar5);
  if (cVar2 == '\0') {
    local_168 = 0x24e;
    if ((int)local_80[0] < 1) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)*local_78;
    }
    uStack_17c = 0;
    local_188 = 0;
    iVar3 = FUN_140e851f0(puVar6,&local_188,DAT_141955260,1);
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    if (iVar3 == -2 || 0 < iVar3) {
      local_168 = 0x254;
      if ((int)local_80[0] < 1) {
        puVar6 = &DAT_1419df7b0;
      }
      else {
        puVar6 = (undefined8 *)*local_78;
      }
      uStack_17c = 0;
      local_188 = 0x4024000000000000;
      iVar3 = FUN_140e851f0(puVar6,&local_188,DAT_141955260,1);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      uVar4 = 1 << ((byte)local_18c & 0x1f);
      local_98 = local_d8;
      if (iVar3 < 1) {
        local_168 = 0x25b;
        if ((uVar4 & 0x46) != 0) {
          FUN_140041a50(&local_198);
        }
        local_198 = 0;
        local_190 = 0;
        local_18c = 5;
        puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe848);
        uStack_17c = *(undefined4 *)((longlong)puVar6 + 0xc);
        uStack_180 = *(undefined4 *)(puVar6 + 1);
        if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) == 0) {
          local_188 = *puVar6;
        }
        else {
          FUN_1400419b0(&local_188,puVar6);
        }
        uStack_19c = 7;
        local_1a8 = CONCAT44(local_1a8._4_4_,1);
        FUN_1400462a0(&local_188,&local_1a8);
        if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a8);
        }
        local_1a8 = local_188;
        uStack_1a0 = uStack_180;
        uStack_19c = uStack_17c;
        if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_f8);
        }
        FUN_140041b80(local_f8,&local_1a8);
        if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        local_a8 = local_f8;
        if ((int)local_80[0] < 1) {
          puVar6 = &DAT_1419df7b0;
LAB_14005e7b4:
          local_1a8 = *puVar6;
          uStack_1a0 = *(undefined4 *)(puVar6 + 1);
          uStack_19c = *(undefined4 *)((longlong)puVar6 + 0xc);
          if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_e8);
          }
          FUN_140041b80(&local_e8,&local_1a8);
        }
        else {
          puVar6 = (undefined8 *)*local_78;
          if (puVar6 != &local_e8) goto LAB_14005e7b4;
        }
        local_a0 = &local_e8;
        local_1a8 = CONCAT44(uRam00000001419df8b4,_DAT_1419df8b0);
        uStack_1a0 = uRam00000001419df8b8;
        uStack_19c = uRam00000001419df8bc;
        if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_d8);
        }
        FUN_140041b80(local_d8,&local_1a8);
        if ((int)local_80[0] < 1) {
          puVar6 = &DAT_1419df7b0;
        }
        else {
          puVar6 = (undefined8 *)*local_78;
        }
        puVar7 = (undefined8 *)FUN_140e79230(&local_198,3,&local_a8);
        if (puVar7 != puVar6) {
          local_1a8 = *puVar7;
          uStack_1a0 = *(undefined4 *)(puVar7 + 1);
          uStack_19c = *(undefined4 *)((longlong)puVar7 + 0xc);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar6);
          }
          FUN_140041b80(puVar6,&local_1a8);
        }
        local_168 = 0x25c;
        if ((int)local_80[0] < 1) {
          puVar6 = &DAT_1419df7b0;
        }
        else {
          puVar6 = (undefined8 *)*local_78;
        }
        uStack_19c = 0;
        local_1a8 = 0;
        iVar3 = FUN_140e851f0(puVar6,&local_1a8,DAT_141955260,1);
        if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a8);
        }
        if (iVar3 == -2 || 0 < iVar3) {
          local_168 = 0x25e;
          plVar8 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe488);
          if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar8, lVar1 != 0)
             ) {
            if (*(int *)(lVar1 + 0x24) < 1) {
              FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
              plVar8 = (longlong *)0x0;
            }
            else {
              plVar8 = *(longlong **)(lVar1 + 8);
            }
          }
          else {
            FUN_140e632c0("trying to index variable that is not an array");
          }
          if (plVar8 != &local_150) {
            local_1a8 = *plVar8;
            uStack_1a0 = (undefined4)plVar8[1];
            uStack_19c = *(undefined4 *)((longlong)plVar8 + 0xc);
            if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_150);
            }
            FUN_140041b80(&local_150,&local_1a8);
          }
          local_168 = 0x25f;
          plVar8 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe488);
          if (0 < (int)local_80[0]) {
            puVar10 = (undefined8 *)*local_78;
          }
          iVar3 = FUN_140e4a740(puVar10);
          if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar8, lVar1 != 0)
             ) {
            if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
              FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                            *(undefined4 *)(lVar1 + 0x24));
              plVar8 = (longlong *)0x0;
            }
            else {
              plVar8 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
            }
          }
          else {
            FUN_140e632c0("trying to index variable that is not an array");
          }
          if (plVar8 != &local_160) {
            local_1a8 = *plVar8;
            uStack_1a0 = (undefined4)plVar8[1];
            uStack_19c = *(undefined4 *)((longlong)plVar8 + 0xc);
            if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_160);
            }
            FUN_140041b80(&local_160,&local_1a8);
          }
          local_168 = 0x260;
          FUN_140e87170(&local_160,DAT_1419fe0e8,0x80000000,&local_110,param_1,param_2);
          FUN_140e87170(&local_160,DAT_1419fe158,0x80000000,&local_120,param_1,param_2);
          FUN_140e87170(&local_150,DAT_1419fe0e8,0x80000000,&local_130,param_1,param_2);
          FUN_140e87170(&local_150,DAT_1419fe158,0x80000000,&local_140,param_1,param_2);
          dVar12 = local_140;
          if ((local_134 & 0xffffff) != 0) {
            dVar12 = (double)FUN_140e4b060(&local_140);
          }
          dVar13 = local_130;
          if ((local_124 & 0xffffff) != 0) {
            dVar13 = (double)FUN_140e4b060(&local_130);
          }
          dVar14 = local_120;
          if ((local_114 & 0xffffff) != 0) {
            dVar14 = (double)FUN_140e4b060(&local_120);
          }
          dVar15 = local_110;
          if ((local_104 & 0xffffff) != 0) {
            dVar15 = (double)FUN_140e4b060(&local_110);
          }
          fVar11 = (float)FUN_140e793d0((float)dVar15,(float)dVar14,(float)dVar13,(float)dVar12);
          if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(param_3);
          }
          *(undefined4 *)((longlong)param_3 + 0xc) = 0;
          *param_3 = (double)fVar11;
        }
        else {
          local_168 = 0x25c;
          if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(param_3);
          }
          *(undefined4 *)((longlong)param_3 + 0xc) = 0;
          *param_3 = 0.0;
        }
        goto LAB_14005e212;
      }
      local_168 = 0x256;
      if ((uVar4 & 0x46) != 0) {
        FUN_140041a50(&local_198);
      }
      local_198 = 0;
      local_190 = 0;
      local_18c = 5;
      local_1a8 = CONCAT44(uRam0000000141dc7afc,_DAT_141dc7af8);
      uStack_1a0 = uRam0000000141dc7b00;
      uStack_19c = DAT_141dc7b04;
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_f8);
      }
      FUN_140041b80(local_f8,&local_1a8);
      local_a8 = local_f8;
      if ((int)local_80[0] < 1) {
        puVar10 = &DAT_1419df7b0;
LAB_14005e578:
        local_1a8 = *puVar10;
        uStack_1a0 = *(undefined4 *)(puVar10 + 1);
        uStack_19c = *(undefined4 *)((longlong)puVar10 + 0xc);
        if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_e8);
        }
        FUN_140041b80(&local_e8,&local_1a8);
      }
      else {
        puVar10 = (undefined8 *)*local_78;
        if (puVar10 != &local_e8) goto LAB_14005e578;
      }
      local_a0 = &local_e8;
      local_1a8 = CONCAT44(uRam0000000141dc7b2c,_DAT_141dc7b28);
      uStack_1a0 = uRam0000000141dc7b30;
      uStack_19c = DAT_141dc7b34;
      if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_d8);
      }
      FUN_140041b80(local_d8,&local_1a8);
      local_1a8 = CONCAT44(uRam00000001419df8b4,_DAT_1419df8b0);
      uStack_1a0 = uRam00000001419df8b8;
      uStack_19c = uRam00000001419df8bc;
      if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_c8);
      }
      FUN_140041b80(local_c8,&local_1a8);
      local_90 = local_c8;
      local_1a8 = CONCAT44(uRam0000000141dc7b3c,_DAT_141dc7b38);
      uStack_1a0 = uRam0000000141dc7b40;
      uStack_19c = DAT_141dc7b44;
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_b8);
      }
      FUN_140041b80(local_b8,&local_1a8);
      local_88 = local_b8;
      FUN_14008e020(param_1,param_2,&local_198,5,&local_a8);
      local_168 = 599;
    }
    else {
      local_168 = 0x250;
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      local_198 = 0;
      local_190 = 0;
      local_18c = 5;
      local_1a8 = CONCAT44(uRam0000000141dc7b4c,_DAT_141dc7b48);
      uStack_1a0 = uRam0000000141dc7b50;
      uStack_19c = DAT_141dc7b54;
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_f8);
      }
      FUN_140041b80(local_f8,&local_1a8);
      local_a8 = local_f8;
      FUN_14008e020(param_1,param_2,&local_198,1,&local_a8);
      local_168 = 0x251;
    }
  }
  else {
    local_168 = 0x24c;
  }
  if (param_3 != (double *)&DAT_1419df7b0) {
    local_1a8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_1a0 = DAT_1419df7b8;
    uStack_19c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_1a8);
  }
LAB_14005e212:
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  _eh_vector_destructor_iterator_(local_f8,0x10,5,FUN_140041b30);
  if (0 < (int)local_80[0]) {
    puVar10 = local_78;
    do {
      puVar6 = (undefined8 *)*puVar10;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = 0;
      *(undefined4 *)((longlong)puVar6 + 0xc) = 5;
      puVar10 = puVar10 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  FUN_140e4cd60(local_78);
  DAT_141dc7a50 = (undefined8 *)local_178;
  return param_3;
}

