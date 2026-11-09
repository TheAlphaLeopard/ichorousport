// gml_Script____struct___466_gml_Object_oEnemyDarner_Create_0 @ 0x14099d7f0

undefined8 *
gml_Script____struct___466_gml_Object_oEnemyDarner_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined4 uVar9;
  ulonglong uVar8;
  undefined8 **ppuVar10;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined8 local_d8;
  byte local_cc;
  undefined4 local_c8 [3];
  byte local_bc;
  longlong local_b8;
  byte local_ac;
  longlong local_a8;
  byte local_9c;
  longlong local_98;
  byte local_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 *local_78;
  undefined4 *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  
  local_f0 = "gml_Script_anon@5121@___struct___466@gml_Object_oEnemyDarner_Create_0";
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  local_e8 = 0xf6;
  uVar9 = 1;
  _eh_vector_constructor_iterator_(&local_d8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_fc = 0xffffff;
  local_108 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  uStack_7c = 0xffffff;
  local_88 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_15c = 0;
  local_168 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_e8 = 0xf7;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f0c68);
  uStack_14c = 0xf;
  local_158 = (longlong *)0x1000001000000e6;
  local_178 = 0xe6;
  uStack_174 = 0x1000001;
  uStack_170 = uStack_150;
  uStack_16c = 0xf;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_178);
  FUN_140e86c30(uVar2,DAT_141a0a728,0x80000000,&local_108);
  local_e8 = 0xf8;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_11c = 0;
  local_128 = 0;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f0c68);
  FUN_140e87930(uVar2,DAT_141a09a78,0x80000000,&local_128);
  local_e8 = 0xfa;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f0c88);
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f0d48);
  plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f0d88);
  plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f0d88);
  plVar7 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f0d88);
  if (puVar3 != &local_d8) {
    local_178 = *(undefined4 *)puVar3;
    uStack_174 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_170 = *(undefined4 *)(puVar3 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_178);
  }
  local_78 = &local_d8;
  if (puVar4 != local_c8) {
    local_178 = *puVar4;
    uStack_174 = puVar4[1];
    uStack_170 = puVar4[2];
    uStack_16c = puVar4[3];
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_178);
  }
  local_70 = local_c8;
  if (((*(uint *)((longlong)plVar5 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar5, lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x24) < 1) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = *(longlong **)(lVar1 + 8);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (plVar5 != &local_b8) {
    local_178 = (undefined4)*plVar5;
    uStack_174 = *(undefined4 *)((longlong)plVar5 + 4);
    uStack_170 = (undefined4)plVar5[1];
    uStack_16c = *(undefined4 *)((longlong)plVar5 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_178);
  }
  local_68 = &local_b8;
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
  if (plVar6 != &local_a8) {
    local_178 = (undefined4)*plVar6;
    uStack_174 = *(undefined4 *)((longlong)plVar6 + 4);
    uStack_170 = (undefined4)plVar6[1];
    uStack_16c = *(undefined4 *)((longlong)plVar6 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_178);
  }
  local_60 = &local_a8;
  if (((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar7, lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x24) < 3) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",2);
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = (longlong *)(*(longlong *)(lVar1 + 8) + 0x20);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (plVar7 != &local_98) {
    local_178 = (undefined4)*plVar7;
    uStack_174 = *(undefined4 *)((longlong)plVar7 + 4);
    uStack_170 = (undefined4)plVar7[1];
    uStack_16c = *(undefined4 *)((longlong)plVar7 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_178);
  }
  local_58 = &local_98;
  uVar2 = CONCAT44(uVar9,DAT_1419fdca8);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_168,5,uVar2,&local_78);
  uVar9 = (undefined4)((ulonglong)uVar2 >> 0x20);
  if (puVar3 != &local_138) {
    local_178 = *(undefined4 *)puVar3;
    uStack_174 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_170 = *(undefined4 *)(puVar3 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_178);
  }
  local_e8 = 0xfb;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  local_78 = &local_138;
  FUN_140e645a0(&local_158,gml_Script_anon_5385____struct___466_gml_Object_oEnemyDarner_Create_0,
                param_1);
  local_178 = (undefined4)local_158;
  uStack_174 = local_158._4_4_;
  uStack_170 = uStack_150;
  uStack_16c = uStack_14c;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_178);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_70 = local_c8;
  ppuVar10 = &local_78;
  uVar8 = CONCAT44(uVar9,DAT_141a01f58);
  FUN_140e634e0(param_1,param_2,&local_168,2,uVar8,ppuVar10);
  local_e8 = 0xfd;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_13c = 0;
  local_148 = 0;
  FUN_140e87930(uVar2,DAT_1419f0998,0x80000000,&local_148);
  local_e8 = 0xfe;
  uStack_14c = 6;
  local_158 = param_1;
  FUN_140e87440(&local_158,DAT_1419fe158,0x80000000,&local_88,uVar8 & 0xffffffffffffff00,
                (ulonglong)ppuVar10 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_178 = (undefined4)local_88;
  uStack_174 = local_88._4_4_;
  uStack_170 = uStack_80;
  uStack_16c = uStack_7c;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_178);
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar2,DAT_1419f0ac8,0x80000000,&local_118);
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  _eh_vector_destructor_iterator_(&local_d8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return param_3;
}

