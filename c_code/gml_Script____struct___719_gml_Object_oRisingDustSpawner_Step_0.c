// gml_Script____struct___719_gml_Object_oRisingDustSpawner_Step_0 @ 0x140cb0720

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___719_gml_Object_oRisingDustSpawner_Step_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  double dVar2;
  ulonglong uVar3;
  char cVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  longlong local_1e8;
  undefined4 local_1dc;
  ulonglong local_1d8;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  char *local_1a0;
  undefined4 local_198;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168 [3];
  undefined4 local_15c;
  undefined4 local_158 [3];
  undefined4 local_14c;
  undefined1 local_148 [12];
  undefined4 local_13c;
  undefined1 local_138 [12];
  undefined4 local_12c;
  undefined4 local_128 [3];
  undefined4 local_11c;
  undefined1 local_118 [12];
  undefined4 local_10c;
  undefined4 local_108 [3];
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 *local_d8;
  undefined4 *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined4 *local_b8;
  undefined1 *local_b0;
  undefined4 *local_a8;
  
  local_1a0 = "gml_Script_anon@738@gml_Object_oRisingDustSpawner_Create_0";
  local_1a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1a8;
  local_198 = 0x19;
  _eh_vector_constructor_iterator_(local_168,0x10,7,FUN_1400424d0,FUN_140041b30);
  local_1dc = 0xffffff;
  local_1e8 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  uStack_16c = 0xffffff;
  local_178 = 0;
  puVar5 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f9778);
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_1fc = 0;
  local_208 = 0;
  local_1ec = 0;
  local_1f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_198 = 0x1a;
  plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f30c8);
  if (((*(int *)((longlong)plVar6 + 0xc) == 2) && (*plVar6 != 0)) && (*(int *)(*plVar6 + 0x24) != 0)
     ) {
    local_198 = 0x1b;
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    local_208 = 0;
    local_200 = 0;
    local_1fc = 5;
    local_e8 = CONCAT44(uRam00000001419ed4d4,_DAT_1419ed4d0);
    uStack_e0 = uRam00000001419ed4d8;
    uStack_dc = uRam00000001419ed4dc;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_e8);
    local_d8 = local_168;
    uVar7 = gml_Script_choose_weighted(param_1,param_2,&local_208,1,&local_d8);
    cVar4 = FUN_140e491e0(uVar7);
    if (cVar4 == '\0') {
      local_198 = 0x1d;
      dVar2 = (double)FUN_140e78f40(1,3);
      iVar13 = (int)dVar2;
      while (0 < iVar13) {
        iVar13 = iVar13 + -1;
        local_198 = 0x1e;
        plVar8 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f30c8);
        plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f30c8);
        iVar12 = 0;
        if ((*(int *)((longlong)plVar8 + 0xc) == 2) && (*plVar8 != 0)) {
          iVar12 = *(int *)(*plVar8 + 0x24);
        }
        dVar2 = (double)FUN_140e78f00((longlong)(iVar12 + -1));
        iVar12 = (int)dVar2;
        if (((*(uint *)((longlong)plVar6 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar6, lVar1 != 0))
        {
          if ((iVar12 < 0) || (*(int *)(lVar1 + 0x24) <= iVar12)) {
            FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar12,
                          *(undefined4 *)(lVar1 + 0x24));
            plVar6 = (longlong *)0x0;
          }
          else {
            plVar6 = (longlong *)((longlong)iVar12 * 0x10 + *(longlong *)(lVar1 + 8));
          }
        }
        else {
          FUN_140e632c0("trying to index variable that is not an array");
        }
        if (plVar6 != &local_1e8) {
          local_218 = (undefined4)*plVar6;
          uStack_214 = *(undefined4 *)((longlong)plVar6 + 4);
          uStack_210 = (undefined4)plVar6[1];
          uStack_20c = *(undefined4 *)((longlong)plVar6 + 0xc);
          if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1e8);
          }
          FUN_140041b80(&local_1e8,&local_218);
        }
        local_198 = 0x1f;
        if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        local_208 = 0;
        local_200 = 0;
        local_1fc = 5;
        if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        local_1f8 = 0;
        local_1f0 = 0;
        local_1ec = 5;
        puVar9 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f30f8);
        puVar10 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a028b8);
        FUN_140e87170(&local_1e8,DAT_1419fe0e8,0x80000000,&local_1b8,param_1,param_2);
        plVar6 = param_1;
        FUN_140e87170(&local_1e8,DAT_1419fe158,0x80000000,&local_178,param_1,param_2);
        uVar15 = (undefined4)((ulonglong)plVar6 >> 0x20);
        FUN_140e609c0(DAT_141a729d8);
        FUN_140e645a0(&local_f8,gml_Object_oRisingDustSpawner_Step_0,0);
        if (&local_f8 != puVar5) {
          local_218 = local_f8;
          uStack_214 = uStack_f4;
          uStack_210 = uStack_f0;
          uStack_20c = uStack_ec;
          if ((1 << ((byte)puVar5[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          FUN_140041b80(puVar5,&local_218);
        }
        FUN_140e60910(1);
        if (puVar5 != local_168) {
          local_218 = *puVar5;
          uStack_214 = puVar5[1];
          uStack_210 = puVar5[2];
          uStack_20c = puVar5[3];
          if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_168);
          }
          FUN_140041b80(local_168,&local_218);
        }
        if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        local_d8 = local_168;
        if (puVar10 != local_158) {
          local_218 = *puVar10;
          uStack_214 = puVar10[1];
          uStack_210 = puVar10[2];
          uStack_20c = puVar10[3];
          if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_158);
          }
          FUN_140041b80(local_158,&local_218);
        }
        local_d0 = local_158;
        uVar14 = FUN_140e794b0(0,0);
        uStack_17c = local_1ac;
        uStack_180 = local_1b0;
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) == 0) {
          local_188 = local_1b8;
        }
        else {
          FUN_1400419b0(&local_188,&local_1b8);
        }
        FUN_140162c50(&local_188,uVar14);
        local_218 = (undefined4)local_188;
        uStack_214 = local_188._4_4_;
        uStack_210 = uStack_180;
        uStack_20c = uStack_17c;
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_148);
        }
        FUN_140041b80(local_148,&local_218);
        if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        local_218 = (undefined4)local_178;
        uStack_214 = local_178._4_4_;
        uStack_210 = uStack_170;
        uStack_20c = uStack_16c;
        local_c8 = local_148;
        if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_138);
        }
        FUN_140041b80(local_138,&local_218);
        local_c0 = local_138;
        if (puVar9 != local_128) {
          local_218 = *puVar9;
          uStack_214 = puVar9[1];
          uStack_210 = puVar9[2];
          uStack_20c = puVar9[3];
          if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_128);
          }
          FUN_140041b80(local_128,&local_218);
        }
        local_b8 = local_128;
        uStack_dc = 0xf;
        local_e8 = 0x1000000000000fb;
        local_218 = 0xfb;
        uStack_214 = 0x1000000;
        uStack_210 = uStack_e0;
        uStack_20c = 0xf;
        if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_118);
        }
        FUN_140041b80(local_118,&local_218);
        local_b0 = local_118;
        uVar7 = CONCAT44(uVar15,DAT_1419fd6d8);
        puVar9 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_1f8,2,uVar7,&local_d8);
        uVar15 = (undefined4)((ulonglong)uVar7 >> 0x20);
        if (puVar9 != local_108) {
          local_218 = *puVar9;
          uStack_214 = puVar9[1];
          uStack_210 = puVar9[2];
          uStack_20c = puVar9[3];
          if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_108);
          }
          FUN_140041b80(local_108,&local_218);
        }
        local_a8 = local_108;
        puVar11 = (undefined8 *)
                  FUN_140e634e0(param_1,param_2,&local_208,5,CONCAT44(uVar15,DAT_141a0a7c8),
                                &local_c8);
        if (puVar11 != &local_1c8) {
          local_218 = *(undefined4 *)puVar11;
          uStack_214 = *(undefined4 *)((longlong)puVar11 + 4);
          uStack_210 = *(undefined4 *)(puVar11 + 1);
          uStack_20c = *(undefined4 *)((longlong)puVar11 + 0xc);
          if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1c8);
          }
          FUN_140041b80(&local_1c8,&local_218);
        }
        local_198 = 0x20;
        uVar3 = FUN_140e794b0(0,0);
        if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        local_1cc = 0;
        local_1d8 = uVar3 ^ 0x8000000000000000;
        FUN_140e87930(&local_1c8,DAT_141a1f500,0x80000000,&local_1d8);
      }
    }
    else {
      local_198 = 0x1b;
    }
  }
  else {
    local_198 = 0x1a;
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  _eh_vector_destructor_iterator_(local_168,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1a8;
  return param_3;
}

