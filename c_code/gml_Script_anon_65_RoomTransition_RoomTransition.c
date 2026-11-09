// gml_Script_anon_65_RoomTransition_RoomTransition @ 0x140442a10

undefined8 *
gml_Script_anon_65_RoomTransition_RoomTransition
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script_rect_overlap";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_28 = 3;
  bVar1 = false;
  puVar5 = &DAT_1419df7b0;
  if (param_4 < 7) {
    puVar4 = &DAT_1419df7b0;
    if (param_4 < 1) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)*param_5;
    }
  }
  else {
    puVar4 = (undefined8 *)param_5[6];
    puVar3 = (undefined8 *)*param_5;
  }
  iVar2 = FUN_140e851f0(puVar3,puVar4,DAT_141955260,1);
  if (iVar2 != -2 && iVar2 < 0) {
    if (param_4 < 5) {
      puVar4 = &DAT_1419df7b0;
      if (param_4 < 3) {
        puVar3 = &DAT_1419df7b0;
      }
      else {
        puVar3 = (undefined8 *)param_5[2];
      }
    }
    else {
      puVar4 = (undefined8 *)param_5[4];
      puVar3 = (undefined8 *)param_5[2];
    }
    iVar2 = FUN_140e851f0(puVar3,puVar4,DAT_141955260,1);
    if (0 < iVar2) {
      if (param_4 < 8) {
        puVar4 = &DAT_1419df7b0;
        if (param_4 < 2) {
          puVar3 = &DAT_1419df7b0;
        }
        else {
          puVar3 = (undefined8 *)param_5[1];
        }
      }
      else {
        puVar4 = (undefined8 *)param_5[7];
        puVar3 = (undefined8 *)param_5[1];
      }
      iVar2 = FUN_140e851f0(puVar3,puVar4,DAT_141955260,1);
      if (iVar2 != -2 && iVar2 < 0) {
        if (param_4 < 6) {
          if (param_4 < 4) {
            puVar4 = &DAT_1419df7b0;
          }
          else {
            puVar4 = (undefined8 *)param_5[3];
          }
        }
        else {
          puVar5 = (undefined8 *)param_5[5];
          puVar4 = (undefined8 *)param_5[3];
        }
        iVar2 = FUN_140e851f0(puVar4,puVar5,DAT_141955260,1);
        if (iVar2 != -2) {
          bVar1 = 0 < iVar2;
        }
      }
    }
  }
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  if (bVar1) {
    uVar6 = 0x3ff0000000000000;
  }
  else {
    uVar6 = 0;
  }
  *param_3 = uVar6;
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

