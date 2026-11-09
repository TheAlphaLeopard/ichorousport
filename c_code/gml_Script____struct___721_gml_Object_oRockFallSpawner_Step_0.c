// gml_Script____struct___721_gml_Object_oRockFallSpawner_Step_0 @ 0x140cb4300

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___721_gml_Object_oRockFallSpawner_Step_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  double dVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined4 local_19c;
  longlong local_198;
  undefined4 local_18c;
  undefined8 local_188;
  char *local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined4 local_164;
  undefined8 local_160;
  undefined4 local_154;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [12];
  undefined4 local_10c;
  undefined1 local_108 [12];
  undefined4 local_fc;
  undefined4 local_f8 [3];
  undefined4 local_ec;
  undefined1 local_e8 [12];
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined4 *local_b8;
  undefined1 *local_b0;
  
  local_180 = "gml_Script_anon@752@gml_Object_oRockFallSpawner_Create_0";
  local_188 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_188;
  local_178 = 0x19;
  _eh_vector_constructor_iterator_(local_118,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_18c = 0xffffff;
  local_198 = 0;
  local_144 = 0xffffff;
  local_150 = 0;
  uStack_11c = 0xffffff;
  local_128 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_154 = 0xffffff;
  local_160 = 0;
  local_164 = 0xffffff;
  local_170 = 0;
  local_1bc = 0;
  local_1c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_178 = 0x1a;
  plVar4 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f9838);
  if (((*(int *)((longlong)plVar4 + 0xc) == 2) && (*plVar4 != 0)) && (*(int *)(*plVar4 + 0x24) != 0)
     ) {
    local_178 = 0x1b;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    local_d8 = CONCAT44(uRam00000001419ed4e4,_DAT_1419ed4e0);
    uStack_d0 = uRam00000001419ed4e8;
    uStack_cc = uRam00000001419ed4ec;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_d8);
    local_c8 = local_118;
    uVar5 = gml_Script_choose_weighted(param_1,param_2,&local_1c8,1,&local_c8);
    cVar3 = FUN_140e491e0(uVar5);
    if (cVar3 == '\0') {
      local_178 = 0x1d;
      dVar2 = (double)FUN_140e78f40(1,3);
      iVar10 = (int)dVar2;
      while (0 < iVar10) {
        iVar10 = iVar10 + -1;
        local_178 = 0x1e;
        plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f9838);
        plVar4 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f9838);
        iVar9 = 0;
        if ((*(int *)((longlong)plVar6 + 0xc) == 2) && (*plVar6 != 0)) {
          iVar9 = *(int *)(*plVar6 + 0x24);
        }
        dVar2 = (double)FUN_140e78f00((longlong)(iVar9 + -1));
        iVar9 = (int)dVar2;
        if (((*(uint *)((longlong)plVar4 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar4, lVar1 != 0))
        {
          if ((iVar9 < 0) || (*(int *)(lVar1 + 0x24) <= iVar9)) {
            FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar9,
                          *(undefined4 *)(lVar1 + 0x24));
            plVar4 = (longlong *)0x0;
          }
          else {
            plVar4 = (longlong *)((longlong)iVar9 * 0x10 + *(longlong *)(lVar1 + 8));
          }
        }
        else {
          FUN_140e632c0("trying to index variable that is not an array");
        }
        if (plVar4 != &local_198) {
          local_1b8 = (undefined4)*plVar4;
          uStack_1b4 = *(undefined4 *)((longlong)plVar4 + 4);
          uStack_1b0 = (undefined4)plVar4[1];
          uStack_1ac = *(undefined4 *)((longlong)plVar4 + 0xc);
          if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_198);
          }
          FUN_140041b80(&local_198,&local_1b8);
        }
        local_178 = 0x1f;
        if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        local_1c8 = 0;
        local_1c0 = 0;
        local_1bc = 5;
        puVar7 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f30f8);
        FUN_140e87170(&local_198,DAT_1419fe0e8,0x80000000,&local_150,param_1,param_2);
        plVar4 = param_1;
        FUN_140e87170(&local_198,DAT_1419fe158,0x80000000,&local_128,param_1,param_2);
        uVar12 = (undefined4)((ulonglong)plVar4 >> 0x20);
        uVar11 = FUN_140e794b0(0,0);
        uStack_12c = local_144;
        uStack_130 = local_148;
        if ((1 << ((byte)local_144 & 0x1f) & 0x46U) == 0) {
          local_138 = local_150;
        }
        else {
          FUN_1400419b0(&local_138,&local_150);
        }
        FUN_140162c50(&local_138,uVar11);
        local_1b8 = (undefined4)local_138;
        uStack_1b4 = local_138._4_4_;
        uStack_1b0 = uStack_130;
        uStack_1ac = uStack_12c;
        if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_118);
        }
        FUN_140041b80(local_118,&local_1b8);
        if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        local_c8 = local_118;
        local_1b8 = (undefined4)local_128;
        uStack_1b4 = local_128._4_4_;
        uStack_1b0 = uStack_120;
        uStack_1ac = uStack_11c;
        if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_108);
        }
        FUN_140041b80(local_108,&local_1b8);
        local_c0 = local_108;
        if (puVar7 != local_f8) {
          local_1b8 = *puVar7;
          uStack_1b4 = puVar7[1];
          uStack_1b0 = puVar7[2];
          uStack_1ac = puVar7[3];
          if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_f8);
          }
          FUN_140041b80(local_f8,&local_1b8);
        }
        uStack_cc = 0xf;
        local_d8 = 0x1000000000000fd;
        local_1b8 = 0xfd;
        uStack_1b4 = 0x1000000;
        uStack_1b0 = uStack_d0;
        uStack_1ac = 0xf;
        local_b8 = local_f8;
        if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_e8);
        }
        FUN_140041b80(local_e8,&local_1b8);
        local_b0 = local_e8;
        puVar8 = (undefined8 *)
                 FUN_140e634e0(param_1,param_2,&local_1c8,4,CONCAT44(uVar12,DAT_141a0a7c8),&local_c8
                              );
        if (puVar8 != &local_1a8) {
          local_1b8 = *(undefined4 *)puVar8;
          uStack_1b4 = *(undefined4 *)((longlong)puVar8 + 4);
          uStack_1b0 = *(undefined4 *)(puVar8 + 1);
          uStack_1ac = *(undefined4 *)((longlong)puVar8 + 0xc);
          if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1a8);
          }
          FUN_140041b80(&local_1a8,&local_1b8);
        }
        local_178 = 0x20;
        uVar5 = FUN_140e794b0(0,0);
        if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_160);
        }
        local_154 = 0;
        local_160 = uVar5;
        FUN_140e87930(&local_1a8,DAT_141a1f500,0x80000000,&local_160);
        local_178 = 0x21;
        uVar5 = FUN_140e794b0(0x33333333,0x33333333);
        if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_170);
        }
        local_164 = 0;
        local_170 = uVar5;
        FUN_140e87930(&local_1a8,DAT_141a1f230,0x80000000,&local_170);
      }
    }
    else {
      local_178 = 0x1b;
    }
  }
  else {
    local_178 = 0x1a;
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  _eh_vector_destructor_iterator_(local_118,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_188;
  return param_3;
}

