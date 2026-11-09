// gml_Object_oMainMenu_Create_0 @ 0x140b478c0

undefined8 *
gml_Object_oMainMenu_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,longlong param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 *local_98;
  double *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined8 local_50;
  byte local_44;
  double local_40;
  undefined4 local_34;
  
  local_60 = "gml_Script_anon@1028@gml_Object_oMaimblade_Create_0";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0x34;
  uVar7 = 1;
  _eh_vector_constructor_iterator_(&local_50,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0x35;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f4028);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_58 = 0x35;
    goto LAB_140b47c1c;
  }
  local_58 = 0x36;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  puVar6 = &DAT_1419df7b0;
  if (param_4 < 2) {
    puVar4 = &DAT_1419df7b0;
LAB_140b479de:
    local_88 = *puVar4;
    uStack_80 = puVar4[1];
    if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_50);
    }
    FUN_140041b80(&local_50,&local_88);
  }
  else {
    puVar4 = *(undefined8 **)(param_5 + 8);
    if (puVar4 != &local_50) goto LAB_140b479de;
  }
  local_98 = &local_50;
  uVar5 = CONCAT44(uVar7,DAT_1419fcb88);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_a8,1,uVar5,&local_98);
  uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_58 = 0x36;
  }
  else {
    local_58 = 0x37;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 5;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f4038);
    if ((param_4 < 2) || (puVar6 = *(undefined8 **)(param_5 + 8), puVar6 != &local_50)) {
      local_88 = *puVar6;
      uStack_80 = puVar6[1];
      if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_50);
      }
      FUN_140041b80(&local_50,&local_88);
    }
    iVar2 = DAT_141a1f440;
    local_98 = &local_50;
    if ((1 << ((byte)local_34 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_40);
    }
    local_34 = 0;
    local_40 = (double)iVar2;
    local_90 = &local_40;
    uVar5 = FUN_140e634e0(param_1,param_2,&local_a8,2,CONCAT44(uVar7,DAT_141a035d8),&local_98);
    iVar2 = FUN_140e851f0(uVar5,uVar3,DAT_141955260,0);
    if (iVar2 == 0) {
      local_58 = 0x39;
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      local_a8 = 0;
      local_a0 = 0;
      local_9c = 5;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f3f78);
      FUN_140e63610(param_1,param_2,&local_a8,0,uVar3,0);
      local_58 = 0x3a;
      puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f4008);
      uStack_80 = CONCAT44(0xd,(undefined4)uStack_80);
      local_88 = 0x3ff0000000000000;
      if (&local_88 != puVar6) {
        local_78 = 0x3ff0000000000000;
        uStack_70 = uStack_80;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_78);
      }
    }
    else {
      local_58 = 0x37;
    }
  }
LAB_140b47c1c:
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(&local_50,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

